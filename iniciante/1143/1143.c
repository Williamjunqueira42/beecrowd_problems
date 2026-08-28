#include <stdio.h>

int main() {
        
    int N;
    int x = 1;
    int y = 1;
    int z = 1;
    scanf("%d", &N);
    for (; N > 0; N--){
        printf("%d %d %d\n", x, y*y, z*z*z);
        x += 1;
        y += 1;
        z += 1;
    }
}
