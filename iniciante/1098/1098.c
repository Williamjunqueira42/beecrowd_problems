#include <stdio.h>

int main(){
    int i = 0;
    int j = 1; 
    double di;
    double dj;
    int cont = 0;
    while (1){
        for (int k = 1; k <= 3; k++){
            di = i + cont*.2;
            dj = k + cont*.2;
            printf("I=%.2g J=%.2g\n", di, dj);

        }
        if (di == 2) break;
        cont++;

    }
}
// Essa não é uma boa solução !!!
