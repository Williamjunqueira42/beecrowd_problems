#include <stdio.h>

int main() {
    double num;
    int p = 0;    
    for (int i = 0; i < 6; i++){
        scanf("%lf", &num);
        p += (num > 0) ? 1 : 0;
    }
    printf("%d valores positivos\n", p);
}
