#include <stdio.h>

int main() {
        
    int N;
    int x, y;
    int sum = 0;
    scanf("%d", &N);
    for (; N > 0; N--){
        scanf("%d %d", &x, &y);
        int start = (x > y) ?  y : x;
        int end = x+y-start;
        start = ((start & 1) == 0) ? start+1 : start+2;
        
        for (; start < end; start+=2){
            sum += start; 
        }
        printf("%d\n", sum);
        sum = 0;
    }
}
