#include <stdio.h>

int main() {
    int N;
    while (scanf("%d", &N) != EOF){
        printf((N > 0) ? "vai ter duas!\n" : "vai ter copa!\n");
    }
}
