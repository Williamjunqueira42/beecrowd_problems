#include <stdio.h>

int main() {
        
    double x, y;
    scanf("%lf %lf", &x, &y);
    if (x == 0 || y == 0){
        if (x+y==0){
            printf("Origem\n");
        }
        else {
            printf((x == 0) ? "Eixo Y\n" : "Eixo X\n");
        }
        return 0;
    } 
    if ((x*y) > 0){
        printf((x > 0) ? "Q1\n" : "Q3\n");
    }

    else{
        printf((x > 0) ? "Q4\n" : "Q2\n");
    }
    return 0;
}
