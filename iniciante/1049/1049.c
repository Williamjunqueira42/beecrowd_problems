#include <stdio.h>
#include <string.h>
int main() {
        
    char a[20], b[20], c[20];
    scanf("%s %s %s", a, b, c);


    if (strcmp(a, "vertebrado") == 0){
        if (strcmp(b, "ave")==0){
            printf((strcmp(c, "carnivoro") == 0) ? "aguia\n" : "pomba\n");
        }
        else if (strcmp(b, "mamifero")==0){ 
            printf((strcmp(c, "onivoro")==0) ? "homem\n" : "vaca\n");
        }
    }
    else if (strcmp(a, "invertebrado")==0){
        if (strcmp(b,"inseto")==0){
            printf((strcmp(c, "hematofago")==0) ? "pulga\n" : "lagarta\n");
        }
        else if (strcmp(b, "anelideo")==0){ 
            printf((strcmp(c, "hematofago")==0) ? "sanguessuga\n" : "minhoca\n");
        }
   

    }



    return 0;
}
