#include <stdio.h>

int main(void)
{
    char text[] = "Hello, \nI am a little cat named Mochi!\nLet's go!";

    for (char *i = text; *i != '\0'; i++) {
        putchar(*i);
    }

    return 0;
}