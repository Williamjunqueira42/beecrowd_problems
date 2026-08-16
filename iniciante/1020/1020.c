#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    int anos = a / 365;
    a %= 365;
    int meses = a / 30;
    a %= 30;
    int dias = a;
    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);
    return 0;
}
