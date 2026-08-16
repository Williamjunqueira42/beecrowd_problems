
#include <stdio.h>
#include <stdlib.h>
int maiorab(int a, int b){
    int maior = (a + b + abs(a-b)) / 2;
    return maior;
}


int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int m_ab = maiorab(a, b);
    int m_abc = maiorab(m_ab, c);
    printf("%d eh o maior\n", m_abc);

    
    return 0;
}
