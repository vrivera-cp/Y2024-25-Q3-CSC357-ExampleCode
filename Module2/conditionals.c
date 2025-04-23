#include <stdio.h>

enum day {SUN = 0, MON, TUE, WED, THU, FRI, SAT};

int main(void)
{
    enum day today = FRI;

    if (today == SUN)
    {
        printf("Happy new week!\n");
    }
    else if (today == SAT)
    {
        printf("Happy weekend!\n");
    }
    else
    {
        printf("Good morning!\n");
    }

    switch (today) {
        case SUN: printf("Happy new week!\n"); break;
        case SAT: printf("Happy weekend!\n"); break;
        default: printf("Good morning!\n");
    }

    return 0;
}