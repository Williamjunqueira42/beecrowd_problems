#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int c = 0; int r=0; int s=0;
    int qtd = 0; 
    char cobaia;
    for (; N > 0; N--){
        scanf("%d %c", &qtd, &cobaia);
        switch (cobaia){
            case 'C':
                c += qtd;
                break;
            case 'R':
                r += qtd;
                break;
            case 'S':
                s += qtd;
                break;
            default:
                break; 
        }
    }


    printf("Total: %d cobaias\n", (c+r+s));
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    printf("Percentual de coelhos: %.2lf %%\n", ((double) c / (c+r+s))*100);
    printf("Percentual de ratos: %.2lf %%\n", ((double) r / (c+r+s))*100);
    printf("Percentual de sapos: %.2lf %%\n", ((double) s / (c+r+s))*100);

}
