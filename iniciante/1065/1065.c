#include <stdio.h>

int main() {
        
    int v[5];
    scanf("%d", &v[0]);
    scanf("%d", &v[1]);
    scanf("%d", &v[2]);
    scanf("%d", &v[3]);
    scanf("%d", &v[4]);
    int cont = 0;
    for (int i = 0; i < 5; i++) {

        if (v[i] % 2 == 0){
            cont++;
        }
    }
    printf("%d valores pares\n", cont);

}
