#include <stdio.h>

int main(void)
{
    int i = 0;
    while (i < 10)
    {
        if (i == 5)
        {
            break;
        }
        printf("while: %d\n", i);
        i++;
    }

    for (int i = 0; i < 10; i++) 
    {
        if (i % 2 == 0)
        {
            continue;
        }
        printf("for: %d\n", i);
    }

    return 0;
}