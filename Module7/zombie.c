#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define SLEEP_TIME  10

int main(void)
{
    pid_t pid = fork();
    if (pid > 0)
    {
        printf("I am the parent %d, my child is: %d\n", getpid(), pid);
        sleep(SLEEP_TIME);
        printf("I am the parent!\n");
    }
    else if (pid == 0)
    {
        printf("I am the child!\n");
    }
    else
    {
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}