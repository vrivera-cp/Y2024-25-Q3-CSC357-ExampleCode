#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>

int main(void)
{
    pid_t pid = fork();

    if (pid > 0)
    {
        sleep(15);
        printf("I am the parent. My Child is: %d\n", pid);
    }
    else if (pid == 0)
    {
        sleep(15);
        printf("I am the child.\n");
    }
    
    return 0;
}