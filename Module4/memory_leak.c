#include <stdlib.h>

int leaky(int x)
{
    int *p = malloc(sizeof(int));
    *p = x;
    return *p;
}

int main()
{
    int *p = malloc(sizeof(int));
    
    *p = leaky(100);

    free(p);

    return 0;
}