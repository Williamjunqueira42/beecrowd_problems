#include <stdio.h>


int main(){

    int N;
    scanf("%d", &N);
    int x, y;
    for (int k = 0; k < N; k++){
        scanf("%d %d", &x, &y);
        x = ((x & 1) == 0) ? x + 1 : x;
        int soma = 0;
        for (int k = 0; k < y; k++){
            soma += x + 2*k;
        } 
        printf("%d\n", soma);
    }
    
    
}
