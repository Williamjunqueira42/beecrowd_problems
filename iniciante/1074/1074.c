#include <stdio.h>

int main() {
        
    int N;
    int num;
    scanf("%d", &N);
    for (; N > 0; N--){
        scanf("%d", &num);
        if (num == 0){
            printf("NULL\n");
        }
        else {
        printf(((num & 1) == 0) ? "EVEN " : "ODD ");
        printf((num  > 0) ? "POSITIVE\n" : "NEGATIVE\n");
        }
    }

}
