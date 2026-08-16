#include <stdio.h>
#include <stdbool.h>

int main(){
    int A, B, C, D;
    scanf("%d %d %d %d", &A, &B, &C, &D);
    bool condition = A % 2 == 0 && C > 0 && D > 0 && D > A && B > C && C + D > A + B;
    if (condition){
        printf("Valores aceitos\n");

    }
    else{
    
        printf("Valores nao aceitos\n");
    }
}
