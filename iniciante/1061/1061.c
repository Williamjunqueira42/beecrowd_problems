

#include <stdio.h>

int main() {
    int din, dend;
    int hin, hend, min, mend, sin, send;
    scanf("Dia %d", &din);
    scanf("%d : %d : %d", &hin, &min, &sin);
    scanf(" Dia %d", &dend);
    scanf(" %d : %d : %d", &hend, &mend, &send);
    int total_secs_in = din*86400 + hin*3600 + min*60 + sin;
    int total_secs_end =dend*86400 + hend*3600 + mend*60 + send;

    int total_secs = total_secs_end - total_secs_in;
    
    int days = total_secs / 86400;
    total_secs %= 86400;

    int hours = total_secs / 3600;
    total_secs %= 3600;

    int minutes = total_secs / 60;
    total_secs %= 60;

    int secs = total_secs;

    printf("%d dia(s)\n", days);
    printf("%d hora(s)\n", hours);
    printf("%d minuto(s)\n", minutes);
    printf("%d segundo(s)\n", secs);
}
