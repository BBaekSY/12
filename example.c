#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

struct point {
    int x;
    int y;
};

int main(void)
{
    struct point p1, p2;
    double xdiff, ydiff;
    double dist;

    printf("Input p1 coordinate (x y): ");
    if (scanf("%d %d", &p1.x, &p1.y) != 2)
        return 1;

    printf("Input p2 coordinate (x y): ");
    if (scanf("%d %d", &p2.x, &p2.y) != 2)
        return 1;

    xdiff = (double)p1.x - p2.x;
    ydiff = (double)p1.y - p2.y;

    dist = sqrt(xdiff * xdiff + ydiff * ydiff);

    printf("Distance: %.2f\n", dist);

    return 0;
}