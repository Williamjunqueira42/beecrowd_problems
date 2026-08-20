//pesos 2, 3, 4 e 1


#include <stdio.h>

int main() {
        
    double n1, n2, n3, n4;
    double mf;
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
    double media = .2*n1 + .3*n2 + .4*n3 + .1*n4;
    if (media >= 7.0) {
        printf("Media: %.1lf\nAluno aprovado.\n", media);
        return 0;
    }

    else if (media < 5) {
        printf("Media: %.1lf\nAluno reprovado.\n", media);
        return 0;
    }
    

    double ne;
    scanf("%lf", &ne);
    mf = (media + ne) /2;
    printf("Media: %.1lf\nAluno em exame.\nNota do exame: %.1lf\n",media, ne);
     
    if (mf >= 5) {
        printf("Aluno aprovado.\n");

    }


     
    else{
        printf("Aluno reprovado.\n");
    }
    
    printf("Media final: %.1lf\n", mf);
  
}
