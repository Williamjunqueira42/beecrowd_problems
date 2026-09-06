#include <stdio.h>

int main(){
    int A;
    int N;
    scanf("%d", &A);
    while (1){
        scanf("%d", &N);
        if (N > 0){
            break;
        }
    }
    int soma = 0;
    for (int i = 0; i <=  N-1; i++){
         soma += A + i;
    }
    printf("%d\n", soma);
}

