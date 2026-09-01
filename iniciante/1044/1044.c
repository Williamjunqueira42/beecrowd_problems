#include <stdio.h>

int main() {
        
    int A, B;
    scanf("%d %d", &A, &B);
    int menor = (A < B) ? A : B;
    int maior = (A+B) - menor;
    printf((maior % menor == 0) ? "Sao Multiplos\n" : "Nao sao Multiplos\n");
}
