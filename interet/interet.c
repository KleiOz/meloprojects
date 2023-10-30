#include <stdio.h>
#include <math.h>
int main(){

    float montant;
    float interet;
    int annees;
    int i;

// saisie des donnees

printf("veuillez saisir votre montant initial: ");
scanf("%f",&montant);
printf("veuillez saisir le taux d'interet: ");
scanf("%f",&interet);
printf("veuillez saisir le nombre d'annees: ");
scanf("%i",&annees);

// boucle sur les annees

for (i = 1; i <= annees; i++) {   
    montant = montant + (montant * interet);
    printf("%i:%f\n", i, montant);}}