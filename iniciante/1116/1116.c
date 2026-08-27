#include <stdio.h>

int main() {
        
    int N;
    scanf("%d", &N);
    int x, y;
    for (; N > 0; N--){
        scanf("%d %d", &x, &y);
        if (y == 0){
        printf("divisao impossivel\n");
        }    
        else {
            printf("%.1lf\n", ((double) x / y));
        }


    }
}
