#include <stdio.h>

int main(){
    int a, b;
    double c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%lf", &c);
    double s = b*c;
    printf("NUMBER = %d\nSALARY = U$  %.2lf\n", a, s);


    return 0;
}
