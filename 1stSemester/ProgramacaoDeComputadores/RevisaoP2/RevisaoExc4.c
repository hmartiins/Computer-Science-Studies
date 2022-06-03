#include <stdio.h>

void ordenar(char[5][20], float[5][2], float[5]);

int main() {

    char nome[5][20];
    float notas[5][2];
    float media[5];

    int i;

    for(i=0;i<5;i++) {
        printf("Aluno %i\n", i+1);

        printf("Nome: ");
        fflush(stdin);
        scanf("%20[^\n]", nome[i]);

        printf("N1: ");
        scanf("%f", &notas[i][0]);
        
        printf("N2: ");
        scanf("%f", &notas[i][1]);
    }

    ordenar(nome, notas, media);

    for(i=0;i<5;i++) {
        printf("%s %.2f %.2f\n", nome[i], notas[i][0], notas[i][1]);
        if(media<7) {
            printf("Reprovado. Media %.2f\n", media[i]);
        }
        else {
            printf("Aprovado. Media %.2f\n", media[i]);
        }
    }

    return 0;
}


void ordenar(char noms[5][20], float ns[5][2], float med[5]) {
    int i,j;

    for(i=0;i<5;i++) {
        med[i] = (ns[i][0]+ns[i][1])/2;
    }

    float aux_m;
    char aux_nom[20];
    float aux_ns[2];

    for(i=0;i<5;i++){
        for(j=i;j<5;j++) {
                if(med[i] > med[j]) {
                    aux_m = med[i];
                    med[i] = med[j];
                    med[j] = aux_m;
                    strcpy(aux_nom, noms[i]);
                    strcpy(noms[i], noms[j]);
                    strcpy(noms[j], aux_nom);
                    aux_ns[0] = ns[i][0];
                    aux_ns[1] = ns[i][1];
                    ns[i][0] = ns[j][0];
                    ns[i][1] = ns[j][1];
                    ns[j][0] = aux_ns[0];
                    ns[j][1] = aux_ns[1];
                }
        }
    }

}