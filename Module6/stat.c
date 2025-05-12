#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

// Convert integer value to a binary representation string
char *binstr(int value, int length)
{
    char *str = malloc(length + 1);
    str[length] = '\0';

    while (length > 0)
    {
        str[--length] = (value & 1) ? '1' : '0';
        value = value >> 1;
    }

    return str;
}

int main(int argc, char **argv)
{
    if (argc != 2) return EXIT_FAILURE;

    struct stat sb;
    if (stat(argv[1], &sb) == -1)
    {
        return EXIT_FAILURE;
    }

    printf("Inode #:      %ld\n", sb.st_ino);
    printf("Size (Bytes): %ld\n", sb.st_size);
    printf("File?         %d\n", S_ISREG(sb.st_mode));
    printf("Directory?    %d\n", S_ISDIR(sb.st_mode));

    char *permission_str = binstr(sb.st_mode & (S_IRWXU | S_IRWXG | S_IRWXO), 9);
    printf("Permissions:  %s\n", permission_str);
    free(permission_str);

    return EXIT_SUCCESS;
}