#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define CHILD_SLEEP_TIME  10
#define PARENT_SLEEP_TIME  5

int main(void)
{
    pid_t pid = fork();

    if (pid == 0)
    {
        printf("I am the child. Going to sleep for %d seconds.\n", CHILD_SLEEP_TIME);
        sleep(CHILD_SLEEP_TIME);
        printf("I am the child. I am awake!\n");
        return EXIT_SUCCESS;
    }
    else if (pid < 0)
    {
        return EXIT_FAILURE;
    }

    printf("I am the parent, my child is: %d. Going to sleep for %d seconds.\n", pid, PARENT_SLEEP_TIME);
    sleep(PARENT_SLEEP_TIME);

    printf("I am the parent. I am awake and waiting on my child...\n");
    int wstatus;
    wait(&wstatus);

    if (WIFEXITED(wstatus))
    {
        printf("Come along now child!\n");
    }
    else
    {
        printf("Oh no! What happened to my child?\n");
    }
    sleep(PARENT_SLEEP_TIME);

    return EXIT_SUCCESS;
}