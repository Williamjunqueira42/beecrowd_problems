#include <stdio.h>

int main() {
    //-8 -3 2    
    int a[3];
    int *max;
    int *mid;
    int *min;
    scanf("%d %d %d", &a[0], &a[1],  &a[2]);
    for (int i = 0; i < 3; i++){
        if (a[i] > *max){
            *min =  *mid;
            *mid = *max;
            *max = a[i];
            
        }
        else if (a[i] > *mid){
            *min = *mid;
            *mid = a[i];
        }
        else {
            *min = a[i];
        }
           }
     printf("%d\n %d\n %d\n\n %d\n %d\n %d\n",*min, *mid, *max, a[0], a[1], a[2]);

}
