#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 16

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        return EXIT_FAILURE;
    }

    FILE *src = fopen(argv[1], "r");
    FILE *dst = fopen(argv[2], "w");

    char buffer[BUFFER_SIZE] = {};

    while (fgets(buffer, BUFFER_SIZE, src) != NULL)
    {
        fputs(buffer, dst);
    }

    fclose(src);
    fclose(dst);

    return 0;
}