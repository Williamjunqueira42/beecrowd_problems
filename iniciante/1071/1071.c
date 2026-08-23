#include <stdio.h>

int main() {
        
    int x, y;
    scanf("%d %d", &x, &y);
    int i = (x < y) ? x : y;
    int j = x+y - i;
    int sum = 0;
    i = (i % 2 == 0) ? i+1 : i+2;
    for (i; i < j; i+=2){
        sum += i;
    }  
    printf("%d\n", sum);
}
