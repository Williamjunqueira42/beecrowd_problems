#include <stdio.h>

int main() {
        
    int N[10];
    int v;
    scanf("%d", &v);
    for (int k = 0; k < 10; k++){
        printf("N[%d] = %d\n", k, v);
        v *= 2;
    }

}
