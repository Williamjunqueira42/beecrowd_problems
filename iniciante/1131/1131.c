#include <stdio.h>

int main() {
    int gremio = 0;
    int inter = 0;
    int empates = 0;
    int g, i;
    int condicao;
    int cont = 0;
    do {
        scanf("%d %d", &i, &g);
        if (g > i){
            gremio++;            
        } 
        else if ( i > g){
            inter++;
        }

        else {
            empates++;
        }
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &condicao);
        cont++;

    } while (condicao == 1);
    printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n", cont, inter, gremio, empates);
    if (inter == gremio){
        printf("Nao houve vencedor\n");
    }
    else {
        printf((inter > gremio) ? "Inter venceu mais\n" : "Gremio venceu mais\n");
    }

}
