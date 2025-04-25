#include <stdio.h>
#include <stdlib.h>

int *make_int(int value)
{
    int *pointer = malloc(sizeof(int));
    *pointer = value;
    return pointer;
}

int main(void)
{
    int *pointer;

    pointer = make_int(100);

    printf("%p: %d\n", (void *) pointer, *pointer);

    free(pointer);

    return 0;
}