#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        return EXIT_FAILURE;
    }

    FILE * file = fopen(argv[1], "a");

    fclose(file);

    return 0;
}