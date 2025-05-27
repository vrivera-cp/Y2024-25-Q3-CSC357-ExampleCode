#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>

int main(void)
{
    pid_t pid = fork();

    if (pid > 0)
    {
        printf("I am the parent.\n");
    }
    else if (pid == 0)
    {
        printf("I am the child.\n");
    }
    
    return 0;
}