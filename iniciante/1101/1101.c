#include <stdio.h>

int main() {
        
    int M, N;
    int inicio, fim;
    int sum = 0;
    while(1){
        scanf("%d %d", &M, &N);
        if ((M <= 0) || (N <= 0)){
            break;
        }

        inicio = (M > N) ? N : M;
        fim = (M + N) - inicio; 
        for (int k = inicio; k <= fim; k++){
            printf("%d ", k);
            sum += k;

        }
        printf("Sum=%d\n", sum);
        sum = 0;
    }

    return 0;
}
