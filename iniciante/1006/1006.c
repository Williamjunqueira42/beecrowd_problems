// William Junqueira

#include <stdio.h>
int main() {
	double A;
	double B;
	double C;

	scanf("%lf", &A);
	scanf("%lf", &B);
	scanf("%lf", &C);

	double media = .2*A + .3*B + .5*C;
	printf("MEDIA = %.1lf\n", media);


	return 0;
}
