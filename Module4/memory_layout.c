#include <stdio.h>

struct person {
    int birth_year;
    char first_initial;
    int age;
};

int main(void)
{
    struct person mochi = {2020, 'M', 5};

    printf("&mochi:                 %p\n", (void*) &mochi);
    printf("&(mochi.birth_year):    %p\n", (void*) &(mochi.birth_year));
    printf("&(mochi.first_initial): %p\n", (void*) &(mochi.first_initial));
    printf("&(mochi.age):           %p\n", (void*) &(mochi.age));

    return 0;
}