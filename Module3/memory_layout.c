#include <stdio.h>

int a = 1;
int b;
int c = 2;

int add(int x, int y)
{
    return x + y;
}

int main(void)
{
    int x = 1, y = 2;
    int sum = add(x, y);
    return 0;
}