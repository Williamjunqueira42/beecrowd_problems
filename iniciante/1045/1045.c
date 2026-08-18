#include <stdio.h>

int main() {
        
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);

    double maiorAB = (A >= B) ? A : B;
    double maiorABC = (maiorAB >= C) ? maiorAB : C; 
    double menorAB = (A <= B) ? A : B;
    double menorABC = (menorAB <= C) ? menorAB : C;
    
    B = (A + B + C) - maiorABC - menorABC;
    A = maiorABC;
    C = menorABC;
    

    if (A >= B + C){
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }
    if (A*A ==( B*B + C*C)){
        printf("TRIANGULO RETANGULO\n");
    }
    
    else if (A*A > B*B + C*C){
        printf("TRIANGULO OBTUSANGULO\n");
    }

    else if (A*A < B*B + C*C){
        printf("TRIANGULO ACUTANGULO\n");
    }
   
    if (A  == B & B == C & A == C){
        printf("TRIANGULO EQUILATERO\n");
    }
 
    if (A == B & B != C || A == C & B != C || B == C & A != C){
        printf("TRIANGULO ISOSCELES\n");
    }
 
}
