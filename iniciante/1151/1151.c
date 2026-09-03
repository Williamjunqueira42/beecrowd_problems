#include <stdio.h>

int main() {
        
    int anterior = 0;
    int atual = 1;
    int end = 0;
    scanf("%d", &end);
    printf("%d", anterior);
    for (int k = 0; k < end; k++){
        atual += anterior;
        printf("%d ", atual);
        anterior = atual;
    
    } 
}
