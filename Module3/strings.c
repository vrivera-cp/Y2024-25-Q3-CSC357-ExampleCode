#include <stdio.h>
#include <string.h>

void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main(void)
{
    char s1[] = "Hello";
    char *s2 = "Hello";
    char s3[] = "Goodbye";

    printf("s1:             %s\n", s1);
    printf("s2:             %s\n", s2);
    printf("s3:             %s\n", s3);
    printf("strlen(s1):     %ld\n", strlen(s1));
    printf("strcmp(s1, s2): %d\n", strcmp(s1, s2));
    printf("strcmp(s1, s3): %d\n", strcmp(s1, s3));

    strcpy(s3, s1);

    printf("s3 After Copy: %s\n", s3);
    
    strcpy(s2, s1);

    return 0;
}