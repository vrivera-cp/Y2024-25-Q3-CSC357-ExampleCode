#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 128
#define TOTAL_BYTES 65535

int main(int argc, char **argv)
{
    char buffer[BUFFER_SIZE];
    unsigned long int bytes = TOTAL_BYTES;

    FILE *f = fopen(argv[1], "w");

    while(bytes > 0)
    {
        int remaining = bytes > BUFFER_SIZE ? BUFFER_SIZE : bytes;
        for (int i = 0; i < remaining; i++)
        {
            buffer[i] = (rand() % ('9' - '0')) + '0';
        }

        int written = fwrite(buffer, sizeof(char), remaining, f);

        if (written > 0)
        {
            bytes -= written;
        }
    }

    fclose(f);

    return EXIT_SUCCESS;
}