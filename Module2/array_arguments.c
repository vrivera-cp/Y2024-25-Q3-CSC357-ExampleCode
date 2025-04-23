#include <stdio.h>

void modify(int x[])
{
    x[0] = 357;
}

int main(void)
{
    int array[] = {1, 2, 3, 4};

    modify(array);

    printf("%d\n", array[0]);

    return 0;
}