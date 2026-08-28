#include <stdio.h>


int main() {
        
    int x, y;
    scanf("%d %d", &x, &y);
    if (x > y){
        int temp = x;
        x = y;
        y = temp;
    }
    // soma de todos os valores entre x e y
    int sum_total = ((x + y) * (y - x + 1)) / 2;

    // soma dos multiplos de 13
    int m1 = (x%13 != 0) ? x + (13 - (x % 13)) : x; // o primeiro multiplo de 13 entre x e y
    int mn = (y%13 != 0) ? y - (y % 13) : y; // n-éssino multiplo de 13 entre x e y
    int n = ((mn - m1) / 13) + 1; 

    int sum_multiplos = ((m1 + mn) * n) / 2;
    printf("%d\n", sum_total - sum_multiplos);
}


