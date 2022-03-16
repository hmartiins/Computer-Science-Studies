#include<stdio.h>

int main(){
    int dia, diaFim, hora, horaFim, minuto, minutoFim, segundo, segundoFim;

    scanf("Dia %d", &dia);
    scanf("%d : %d : %d\n", &hora, &minuto, &segundo);

    scanf("Dia %d", &diaFim);
    scanf("%d : %d : %d", &horaFim, &minutoFim, &segundoFim);

    segundo = segundoFim - segundo;
    minuto = minutoFim - minuto;
    hora = horaFim - hora;
    dia = diaFim - dia;

    if (segundo < 0) {
        segundo += 60;
        minuto--;
    }

    if (minuto < 0) {
        minuto += 60;
        hora--;
    }

    if (hora < 0) {
        hora += 24;
        dia--;
    }

    printf("%d dia(s)\n", dia);
    printf("%d hora(s)\n", hora);
    printf("%d minuto(s)\n", minuto);
    printf("%d segundo(s)\n", segundo);
 
    return 0;
}