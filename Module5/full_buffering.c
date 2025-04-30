#include <stdio.h>

#define BUFFER_SIZE 4

int main(void)
{
    char text[] = "Hello, \nI am a little cat named Mochi!\nLet's go!";

    char buffer[BUFFER_SIZE] = {};

    setvbuf(stdout, buffer, _IOFBF, BUFFER_SIZE);

    for (char *i = text; *i != '\0'; i++) {
        putchar(*i);
    }

    fflush(stdout);

    return 0;
}