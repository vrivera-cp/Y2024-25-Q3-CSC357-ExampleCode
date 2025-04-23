#include <stdio.h>

void increment(int x)
{
    x = x + 1;
}

int main(void)
{
    int a = 5;
    
    increment(a);
    printf("%d", a);

    return 0;
}