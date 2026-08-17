

#include <stdio.h>

int main() {
    double p[5] = {4.0, 4.5, 5.0, 2.0, 1.50};
    int c, qtd;
    scanf("%d %d", &c, &qtd);
    printf("Total: R$ %.2lf\n",  p[c-1] * qtd);
            
}
