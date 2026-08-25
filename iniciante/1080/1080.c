#include <stdio.h>

int main() {
    int num; 
    int max[2];    
    for (int i = 0; i<100; i++){
        scanf("%d", &num);
        if ((num > max[0]) || (i == 0)){
            max[0] = num;
            max[1] = i;
        }  
        
    }
    printf("%d\n%d\n", max[0], max[1]+1);
}
