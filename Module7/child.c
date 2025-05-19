#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    pid_t pid = fork();
    if (pid == 0)
    {
        printf("I am the parent!\n");
    }
    else if (pid > 0)
    {
        printf("I am the child!\n");
    }
    else
    {
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}