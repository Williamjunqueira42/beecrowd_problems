#include <stdio.h>

int main() {
        
    double num = 0; 
    double sum = 0;
    int cont = 0;
    for (int i = 0; i < 6; i++){
        scanf("%lf",&num);
        if (num > 0){
        
            sum += num;
            cont++;
        }   
    }

    printf("%d valores positivos\n", cont);
    printf("%.1lf\n", (sum/cont));
    
}

