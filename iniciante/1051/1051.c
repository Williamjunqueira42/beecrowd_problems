


#include <stdio.h>

int main() {
        
    double s;
    double t;
    scanf("%lf", &s);

    if (s <= 2000) {
        printf("Isento\n");
    }
    else if (s <= 3000) {
        t = (s - 2000) * .08;
        printf("R$ %.2lf\n", t); 
    }
    
    else if (s <= 4500) {
        t = .08*1000 + (s - 3000) *.18;
        printf("R$ %.2lf\n", t);
    }

    else{
        t = .08*1000 + .18*1500 + (s - 4500)*.28;
        printf("R$ %.2lf\n", t);
    }
}
