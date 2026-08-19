#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a-b < 0){
        printf("O JOGO DUROU %d HORA(S)\n", (-1*(a-b)));
    }
    else {
        printf("O JOGO DUROU %d HORA(S)\n", (24 - (a-b)));
    
    }
    return 0;    
}   
