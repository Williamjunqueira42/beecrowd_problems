#include <stdio.h>

int main() {
   
    int N;
    scanf("%d", &N);
    
    int anterior = 0;
    int atual = 1;
    int temp;
    printf("%d %d", anterior, atual);
    for (int k = 0; k < N-2; k++){
        
        printf(" %d", atual + anterior);
        temp = anterior;
        anterior = atual;
        atual += temp; 

        
    }
    printf("\n");

 
     
}
