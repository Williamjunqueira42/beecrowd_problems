#include <stdio.h>

int main(){
    int idade = 0;
    int soma = 0;
    int c = 0;
    while (1){
        scanf("%d", &idade);
        if (idade < 0){
            printf("%.2lf\n", (double) soma / c);
            break;
        }
        soma += idade;
        c++;
    }
}

