#include <stdlib.h>

int main(void)
{
    int *array1 = malloc(sizeof(int) * 16);
    int *array2 = calloc(16, sizeof(int));

    array1 = realloc(array1, sizeof(int) * 32);
    array2 = realloc(array2, sizeof(int) * 8);

    free(array1);
    free(array2);

    return 0;
}