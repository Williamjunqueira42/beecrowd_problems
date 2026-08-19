#include <stdio.h>

int main() {
        
    char *a;
       int i;
    scanf("%d", &i);

    switch (i) {
        case 61:
            a = "Brasilia";
            break;
        case 71:
            a = "Salvador";
            break;

        case 11:
            a = "Sao Paulo";
            break;

        case 21:
            a = "Rio de Janeiro";
            break;
        
        case 32:
            a = "Juiz de Fora";
            break;
        case 19:
            a = "Campinas";
            break;
        case 27:
            a = "Vitoria";
            break;
        case 31:
            a = "Belo Horizonte";
            break;

        default:
            printf("DDD nao cadastrado\n");
            return 0;
        
    } 

    printf("%s\n", a);




}
