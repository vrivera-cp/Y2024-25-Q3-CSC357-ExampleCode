#include <stdio.h>
#include "external_global.c"

int x = 1;
extern int y;

int main(void)
{
    printf("x: %d\n", x);
    printf("y: %d\n", y);

    return 0;
}