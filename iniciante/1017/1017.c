

#include <stdio.h>

int main() {
        int tempo, vm;
        scanf("%d", &tempo);
        scanf("%d", &vm);
        int d = tempo * vm; 
        printf("%.3lf\n",(double) d/12);
        return 0;
}
