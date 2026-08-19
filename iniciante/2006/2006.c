#include <stdio.h>
/*
int main() {
        
    int t;
    int array[5];
    scanf("%d", &t);
    scanf("%d %d %d %d %d", &array[0], &array[1], &array[2], &array[3], &array[4]);
    int cont = 0;
    for (int i = 0; i < 5; i++){
        cont = (array[i] == t) ? cont + 1 : cont;
    }   
    printf("%d\n", cont);
}

*/

// Outra solução sem utilizar arrays
int main(){
    int t;
    scanf("%d", &t);
    int num;
    int cont = 0;
    for (int i = 0; i <5; i++){
        scanf("%d", &num);
        if (t == num) {
            cont++;
        } 
    }
    printf("%d\n", cont);
}
