#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>

void function(int signmum)
{
    printf("Oh no, I'm being terminated!\n");
    exit(0);
}

int main(void)
{
    signal(SIGINT, function);

    pid_t pid = fork();

    if (pid > 0)
    {
        wait(NULL);
    }
    
    if (pid == 0)
    {
        getchar();
        kill(getppid(), SIGINT);
        printf("Parent terminated!\n");
    }

    return 0;
}