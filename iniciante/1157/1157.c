#include <stdio.h>

int main() {
        
    int N;
    scanf("%d", &N);
    
    for (int k = 1; k <= N; k++){

        if ((N % k) == 0){
            printf("%d\n", k);
        } 
    }
}
