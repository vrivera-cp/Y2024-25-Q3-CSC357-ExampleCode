#include <stdio.h>

typedef struct point
{
    int x;
    int y;
} Point;

typedef Point *PointPointer;

int main(void)
{
    Point p = {3, 5};
    PointPointer pp = &p;

    printf("(%d, %d)\n", pp->x, pp->y);

    return 0;
}