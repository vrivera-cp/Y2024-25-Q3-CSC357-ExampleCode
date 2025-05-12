#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/stat.h>

int main(int argc, char **argv)
{
    if (argc == 1) return EXIT_FAILURE;

    for (char **arg = argv + 1; *arg != NULL; arg++)
    {
        int fd = open(*arg, O_RDONLY | O_CREAT, S_IRWXU | S_IRGRP | S_IROTH);
        close(fd) == -1;
    }
    
    return EXIT_SUCCESS;
}