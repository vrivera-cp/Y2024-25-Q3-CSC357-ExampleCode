#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

#define BUFFER_SIZE 128

int main(void)
{
    int pipe_to_child[2];
    int pipe_to_parent[2];
    
    pipe(pipe_to_child);
    pipe(pipe_to_parent);

    int pid = fork();
    
    if (pid > 0)
    {
        close(pipe_to_child[0]);
        close(pipe_to_parent[1]);

        printf("(Parent) Enter message for child:\n");

        char buffer[BUFFER_SIZE];
        int n;

        while ((n = read(STDIN_FILENO, buffer, BUFFER_SIZE)) > 0)
        {
            write(pipe_to_child[1], buffer, n);
        }

        close(pipe_to_child[1]);

        while ((n = read(pipe_to_parent[0], buffer, BUFFER_SIZE)) > 0)
        {
            printf("(Parent) received: \n");
            write(STDOUT_FILENO, buffer, n);
        }

        close(pipe_to_parent[0]);
    }
    else if (pid == 0)
    {
        close(pipe_to_child[1]);
        close(pipe_to_parent[0]);

        char buffer[BUFFER_SIZE];
        int n;
        while ((n = read(pipe_to_child[0], buffer, BUFFER_SIZE)) > 0)
        {
            printf("(Child) received:\n");
            write(STDOUT_FILENO, buffer, n);
        }

        close(pipe_to_child[0]);

        write(pipe_to_parent[1], "Thanks!\n", sizeof("Thanks!\n"));

        close(pipe_to_parent[1]);
    }

    return EXIT_SUCCESS;
}