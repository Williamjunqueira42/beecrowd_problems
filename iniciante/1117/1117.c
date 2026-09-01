#include <stdio.h>

int main() {
    double nota = 0;
    double soma = 0;
    int cont = 0;
    while (cont < 2){
        scanf("%lf", &nota);
        if ((0 <= nota) && (nota <= 10)){
            soma += nota;
            cont++;
        }
        else {
            printf("nota invalida\n");
        }
    }
    printf("media = %.2lf\n", soma/2); 
    return 0;
}
