#include <stdio.h>

int main() {
    int x;
    while (1){
        scanf("%d", &x);
        if (x == 0){
            return 0;
        }
        

        x = ((x & 1) == 0) ? x : x+1;
        int soma = 0;
        for (int k = 0; k < 5; k++){
            soma += x + 2*k;
        } 
        printf("%d\n", soma);
    }
    
    
}

        
    
    



