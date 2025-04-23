#include <stdio.h>

#define PI 3.14159

enum day {SUN = 0, MON, TUE, WED, THU, FRI, SAT};

int main(void)
{
    enum day today = FRI;
    printf("today: %d\n", today);

    double radius = 2.0;
    double area = radius * radius * PI;
    printf("area: %.2f\n", area);

    return 0;
}