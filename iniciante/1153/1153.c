#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int fat = 1;
    for (int i = N; i > 0; i--){
        fat *= i; 
    } 
    printf("%d\n", fat);
    return 0;
}
