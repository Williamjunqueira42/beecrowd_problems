#include <stdio.h>

int main() {
        
    int a;
    scanf("%d", &a);
    a = (a % 2 == 0) ? a - 1 : a - 2;
    for (int i = 0; i < 6; i++){
        a += 2;
        printf("%d\n", a);
    }
}
