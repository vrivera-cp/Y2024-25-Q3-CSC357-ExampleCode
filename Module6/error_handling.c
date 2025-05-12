#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <sys/stat.h>

int main(int argc, char **argv)
{
    // Open the file
    int fd;
    if ((fd = open(argv[1], O_WRONLY | O_CREAT, S_IRWXU)) == -1)
    {
        perror("main open failure");
        return EXIT_FAILURE;
    }

    // Get a line of text
    char *buffer = NULL;
    size_t n = 0;

    printf("Enter a line of text: ");
    if (getline(&buffer, &n, stdin) == -1)
    {
        if (errno > 0)
        {
            perror("main getline failure");
            return EXIT_FAILURE;
        }
    }

    // Write text
    if (write(fd, buffer, strlen(buffer)) == -1)
    {
        perror("main write failure");
        return EXIT_FAILURE;
    }

    // Cleanup
    free(buffer); // No error checking, but can still have undefined behavior!

    if (close(fd) == -1)
    {
        perror("main close failure");
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}