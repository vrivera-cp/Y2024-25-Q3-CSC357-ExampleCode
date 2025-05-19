#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>

#define N_WRITES 128

int main(int argc, char **argv)
{
    // Truncate file
    int fd = open(argv[1], O_WRONLY | O_TRUNC | O_CREAT, S_IRWXU);
    close(fd);

    sleep(2); // Attempt to synchronize processes

    pid_t pid = fork();

    if (pid > 0)
    {
        fd = open(argv[1], O_WRONLY);
        for (int i = 0; i < N_WRITES; i++)
        {
            lseek(fd, 0, SEEK_END);
            write(fd, "Parent\n", 7);
        }
        close(fd);
    }
    else if (pid == 0)
    {
        fd = open(argv[1], O_WRONLY);
        for (int i = 0; i < N_WRITES; i++)
        {
            lseek(fd, 0, SEEK_END);
            write(fd, "Child\n", 6);
        }
        close(fd);
    }

    return EXIT_SUCCESS;
}