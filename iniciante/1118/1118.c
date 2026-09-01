#include <stdio.h>

int main() {
    double nota = 0;
    double soma = 0;
    int cont = 0;
    while (1){
        if (cont == 2){
            printf("media = %.2lf\n", soma/2); 
            int condicao;
            while (1){
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%d", &condicao);
                if (condicao == 1){
                    soma = 0;
                    cont = 0;
                    break;
                }
                else if (condicao == 2){
                    return 0;
                }
            }
        }
    
        scanf("%lf", &nota);
        if ((0 <= nota) && (nota <= 10)){
            soma += nota;
            cont++;
        }
        else {
            printf("nota invalida\n");
        }
    }
}

