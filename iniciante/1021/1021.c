// William Junqueira

#include <stdio.h>
#include <math.h>
int main(){
    double montante;
    int notas100, notas50, notas20, notas10, notas5, notas2;
    int moedas100, moedas50, moedas25, moedas10, moedas5, moedas1;
    scanf("%lf", &montante);
    
    int montante_centavos = round(montante*100);
    

    notas100 = montante_centavos / 10000;
    montante_centavos -= notas100*10000;

    notas50 = montante_centavos / 5000;
    montante_centavos -= notas50*5000;

    notas20 = montante_centavos / 2000;
    montante_centavos -= notas20*2000;

    notas10 = montante_centavos / 1000;
    montante_centavos -= notas10*1000;

    notas5 = montante_centavos / 500;
    montante_centavos -= notas5*500;
    
    notas2 = montante_centavos / 200;
    montante_centavos -= notas2*200;

    moedas100 = montante_centavos / 100;
    montante_centavos -= moedas100*100;

    moedas50 = montante_centavos / 50;
    montante_centavos -= moedas50*50;

    moedas25 = montante_centavos / 25;
    montante_centavos -= moedas25*25;
    
    moedas10 = montante_centavos / 10;
    montante_centavos -= moedas10*10;

    moedas5 = montante_centavos / 5;
    montante_centavos -= moedas5*5;

    moedas1 = montante_centavos / 1; 
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", notas100);
    printf("%d nota(s) de R$ 50.00\n", notas50);
    printf("%d nota(s) de R$ 20.00\n", notas20);
    printf("%d nota(s) de R$ 10.00\n", notas10);
    printf("%d nota(s) de R$ 5.00\n", notas5);
    printf("%d nota(s) de R$ 2.00\n", notas2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moedas100);
    printf("%d moeda(s) de R$ 0.50\n", moedas50);
    printf("%d moeda(s) de R$ 0.25\n", moedas25);
    printf("%d moeda(s) de R$ 0.10\n", moedas10);
    printf("%d moeda(s) de R$ 0.05\n", moedas5);
    printf("%d moeda(s) de R$ 0.01\n", moedas1);
   return 0;
}
