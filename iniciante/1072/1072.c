#include <stdio.h>

int main() {
        
    int N;
    scanf("%d", &N);
    int num;
    int in = 0;
    for (int i = N; i > 0; i--){
        scanf("%d", &num);
        if (num >=10 && num <= 20){
            in++;
        }
    }
    printf("%d in\n%d out\n", in, N-in);
}


