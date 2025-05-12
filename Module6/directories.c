#define _GNU_SOURCE
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <stdio.h>
#include <fcntl.h>

int main(int argc, char **argv)
{
    if (argc != 2) return EXIT_FAILURE;

    // Open the directory
    int fd = open(argv[1], O_RDONLY);

    // Ensure file is a directory
    struct stat sb;
    fstat(fd, &sb);

    if (!S_ISDIR(sb.st_mode))
    {
        return EXIT_FAILURE;
    }

    // Open a directory stream
    DIR *d = fdopendir(fd);

    // Iterate over directory entries
    struct dirent *dirent;
    while ((dirent = readdir(d)) != NULL)
    {
        printf("%s\n", dirent->d_name);
    }

    // Clean up
    closedir(d); // Also closes fd

    return EXIT_SUCCESS;
}