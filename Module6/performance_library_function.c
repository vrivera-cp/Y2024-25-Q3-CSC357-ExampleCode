#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    FILE *f = fopen(argv[1], "r");

    int c;
    while ((c = fgetc(f)) != EOF)
    {
        // Do Nothing
    }

    fclose(f);

    return EXIT_SUCCESS;
}