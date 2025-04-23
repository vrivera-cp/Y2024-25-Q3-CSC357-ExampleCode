#include <stdio.h>
#include <math.h>

struct point
{
    int x;
    int y;
};

double origin_distance(struct point p)
{
    p.x *= p.x;
    p.y *= p.y;
    return pow(p.x + p.y, 0.5);
}

void move_point(struct point *p, int dx, int dy) {
    p->x += dx;
    p->y += dy;
}

int main(void)
{
    struct point p = {3, 4};

    printf("Distance: %.2f\n", origin_distance(p));

    move_point(&p, -3, -4);

    printf("pe: (%d, %d)\n", p.x, p.y);

    return 0;
}

