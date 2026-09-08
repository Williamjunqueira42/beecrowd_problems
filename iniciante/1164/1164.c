#include <stdio.h>

int main(){
   int N;
   scanf("%d", &N);
   int x;
   for (int k = 0; k < N; k++){
        scanf("%d", &x);
        int sum = 0;
        for (int j = x-1; j > 0; j--){
            if ((x % j) == 0){
                sum += j;
            }
        }
        printf("%d ", x);
        printf((sum == x) ? "eh perfeito\n" : "nao eh perfeito\n");
   }

       
}   
