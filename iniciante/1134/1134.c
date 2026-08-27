#include <stdio.h>

int main() {
        
    int var;
    int a = 0; int g = 0; int d = 0;
    while (1){
        scanf("%d", &var);
         
        switch (var) {
            case 1:
                a++;  
                break; 
            case 2:
                g++;
                break;
            case 3:
                d++;
                break;

            case 4:
                printf("MUITO OBRIGADO\n");
                printf("Alcool: %d\n", a);
                printf("Gasolina: %d\n", g);
                printf("Diesel: %d\n", d);
                return 0;
            
            default:
                break;

        }


    }
}
