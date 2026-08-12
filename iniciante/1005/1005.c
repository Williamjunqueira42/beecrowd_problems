// William Junqueira

#include <stdio.h>
int main(){
	double notaA;
	double notaB;
	scanf("%lf", &notaA);
	scanf("%lf", &notaB);
	
	double media = (3.5*notaA + 7.5*notaB) / 11;	
	printf("MEDIA = %.5f\n", media); 

	return 0;
}



