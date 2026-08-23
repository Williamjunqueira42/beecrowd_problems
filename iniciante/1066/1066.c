#include <stdio.h>

int main() {
        
    int pares = 0;
    int impares = 0;
    int positivos = 0;
    int negativos = 0;
    int num;
    for (int i = 0; i < 5; i++){
        scanf("%d", &num);
        if (num % 2 == 0){
            pares++;
        }
        else{
            impares++;
        }

        if (num > 0){
            positivos++;
        }
        else if (num != 0){
            negativos++;
        }
    }
    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", positivos);
    printf("%d valor(es) negativo(s)\n", negativos);
}

