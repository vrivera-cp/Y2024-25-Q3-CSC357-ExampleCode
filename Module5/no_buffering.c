#include <stdio.h>

int main(void)
{
    char text[] = "Hello, \nI am a little cat named Mochi!\nLet's go!";

    setvbuf(stdout, NULL, _IONBF, 0);

    for (char *i = text; *i != '\0'; i++) {
        putchar(*i);
    }

    return 0;
}