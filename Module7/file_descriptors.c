#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

#define SLEEP_DURATION 4

int main(void)
{
    FILE *f = fopen("shared", "w");

    pid_t pid = fork();
    if (pid > 0)
    {
        fprintf(f, "I am the parent!\n");
        fclose(f);
    }
    else if (pid == 0)
    {
        sleep(SLEEP_DURATION); // Sleep, hoping the parent finishes first
        fprintf(f, "I am the child!\n");
        fclose(f);
    }
    else
    {
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}