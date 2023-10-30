#include <math.h>
#include<stdio.h>

/*Resolution equation second degré
Auteur Marielle, version du 17/10/23*/

float main() {
    float a,b,c; //coefficients equation
    float delta; //discriminant
    float x1,x2,x3; //solution

//saisie de données

printf("veuillez saisir a: ");
scanf("%f",&a);
printf("veuillez saisir b: ");
scanf("%f",&b);
printf("veuillez saisir c: ");
scanf("%f",&c);

printf("vous avez saisi : %f %f %f\n",a,b,c);

//calcul du discriminant
delta = (b*b) - 4 * (a*c);

//solution 1

if (delta == 0) { x3=(-b)/(2*a);
printf("l'equation a une unique solution: %f\n",x3);
}

//solution 2
else if (delta > 0) {printf("l'equation a deux solutions distinctes\n");
x1 = (-b-sqrtf(delta))/(2*a);
x2 = (-b+sqrtf(delta))/(2*a);
printf("solution 1: %f\n",x1);
printf("solution 2: %f\n",x2);}
else printf("l'equation n'a pas de solution reelle");
}
