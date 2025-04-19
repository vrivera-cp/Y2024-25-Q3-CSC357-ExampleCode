#include <stdio.h>

int strlen(char *s)
{
    char *p = s;
    while (*p != '\0') p++;
    return p - s;
}

int main(int argc, char *argv[])
{
    char a[6] = "MOCHI";

    char *p = a; // &a[0]
    p = p + 2;   // &a[2]

    printf("%d\n", strlen(a));

    return 0;
}