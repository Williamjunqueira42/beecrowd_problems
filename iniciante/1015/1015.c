#include <stdio.h>
#include <math.h>
int main() {
    double x1, y1, x2, y2;
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    double difx = x2-x1;
    double dify = y2-y1;
    double dist = sqrt(pow(difx, 2) + pow(dify, 2));
    printf("%.4lf\n", dist);
    return 0;
}
