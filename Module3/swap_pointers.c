#include <stdio.h>

void swap(int *px, int *py) {
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
}

int main(void)
{
    int x = 1;
    int y = 2;

    swap(&x, &y);

    printf("x: %d\ny: %d\n", x, y);

    return 0;
}