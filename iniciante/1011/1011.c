#include <stdio.h>
#include <math.h>
int main() {
    double PI = 3.14159;
    double raio;
    scanf("%lf", &raio);
    double volume = (4/3.0) * PI * pow(raio, 3);
    printf("VOLUME = %.3lf\n", volume);
    return 0;
}
