#include <stdio.h>

int main() {
        
    int x, z;
    scanf("%d", &x);
    do{
        scanf("%d", &z);

    } while (z <= x);
    
    int cont = 1;
    int soma = x;
    while (soma <= z){
        soma += x + cont;
        cont++;
    }
    printf("%d\n", cont);
}
