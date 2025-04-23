#include <stdio.h>

#define forever for (;;)
#define max(A, B) ((A) > (B) ? (A) : (B))

int main(void)
{
    forever
    {
        printf("%d\n", max(999, 1));
    }
    
    return 0;
}