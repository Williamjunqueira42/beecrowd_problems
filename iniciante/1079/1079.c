#include <stdio.h>

int main() {
        
    int N;
    double a, b, c;
    scanf("%d", &N);
    for (; N > 0; N--){
        scanf("%lf %lf %lf", &a, &b, &c);
        printf("%.1lf\n", ((.2*a) + (.3*b) + (.5*c)));
    }
}
