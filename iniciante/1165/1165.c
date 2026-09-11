#include <stdio.h>
#include <math.h>
int main() {
        
    int N;
    int X;
    scanf("%d", &N);
    for (int k = 0; k < N; k++){
        scanf("%d", &X);
        printf("%d ", X);
        int is_prime = 1;
        for (int j = 2; j <= (int) floor(sqrt(X)); j++){
            if ((X % j) == 0){
                printf("nao eh primo\n");
                is_prime = 0;
                break;

            }
        }
        if (is_prime){
            printf("eh primo\n");
        }
    }
}

