#include <stdio.h>

int main() {
        
    int x, y;
    scanf("%d %d", &x, &y);
    int start = (x < y) ? x : y;
    int end = (x+y) - start;
    int r;
    start++;
    for (; start <= end; start++){
        r = start % 5;
        if ((r == 2) || (r == 3)) {
            printf("%d\n", start);
        } 
    }
}
