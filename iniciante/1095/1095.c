#include <stdio.h>

int main(){
    int i = 1;
    int j = 60;
    for (; j >= 0; j-=5){
       
        printf("I=%d J=%d\n", i, j);
        i += 3;

    }      

}
