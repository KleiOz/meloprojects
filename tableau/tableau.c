#include <stdio.h>
#include <math.h>

int main(){
    int tab[20][10]; // tableau de 20 lignes de 10 entiers
    int i;
    int j;

    //initialisation du tableau a 0

    for (i=0; i<20;i++){
        for (j = 0; j<10; j++) tab[i][j] = (i*10)+j;
    }

 //affichage du tableau

 for (i = 0 ; i < 20 ; i++) {
    for (j = 0 ; j < 10; j++) printf("%d : ", tab[i][j]);
    printf("\n"); // Saut de ligne

    }}