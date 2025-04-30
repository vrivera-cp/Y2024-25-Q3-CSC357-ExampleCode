#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        return EXIT_FAILURE;
    }

    FILE *src = fopen(argv[1], "r");
    FILE *dst = fopen(argv[2], "w");

    int c;
    while ((c = fgetc(src)) != EOF)
    {
        fputc(c, dst);
    }

    fclose(src);
    fclose(dst);

    return 0;
}