// Desigualdade triangular -> A < B + C; B < A + C; C < A + B;
// Sendo C o maior lado -> abs(A - B) < C < A + B 
//


#include <stdio.h>

int main() {
    double a, b, c;
    double A, B, C;
    scanf("%lf %lf %lf", &a, &b, &c);
    A = a;
    B = b;
    C = c;
    double temp;
    if (a > b && a > c){
        temp = a;
        a = c;
        c = temp;
        
    }
    else if (b > a && b > c){
        temp = b;
        b = c;
        c = temp;
    }
    
    int absab = ( (a - b) < 0 ) ? -1*(a-b) : (a-b);
    if (absab < c && c < (a+b)){
        printf("Perimetro = %.1lf\n", (a+b+c)); 
    }
    else{
        printf("Area = %.1lf\n", (.5*(A+B)*C)); 
        
    }

    

}


