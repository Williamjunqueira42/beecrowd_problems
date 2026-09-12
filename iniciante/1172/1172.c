#include <stdio.h>

int main() {
        
    int x[10];

    for (int k = 0; k < 10; k++){
        scanf("%d", &x[k]);
        x[k] = ((x[k] <= 0) ? 1 : x[k]);
        printf("X[%d] = %d\n", k, x[k]);
    }
}
