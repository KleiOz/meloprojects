#include <stdio.h>
int main() {
    int j,k;
    printf("adresse de j : %lu\n",&j);
    printf("adresse de k : %lu\n",&k);
    printf("taille entier: %i\n",sizeof(int));

    //saisie des données
   
    printf("veuillez saisir j\n");
    scanf("%i",&j);
    k = 5+j;
    
    //addition
   
    printf ("addition de %i(j) + 5 = %i(k)\n",j,k);
    if (j > k) printf("j plus grand\n");
    else printf("k plus grand\n");

    
    //soustraction
    k = 5 - j;
    printf("soustraction de %i(j) - 5 = %i(k)\n",j,k);
    if (j > k) printf("j plus grand\n");
    else printf("k plus grand\n");

    //multiplication
    k = 5*j;
    printf("multiplication de %i(j) par 5 = %i(k)\n",j,k);
    if (j > k) printf("j plus grand\n");
    else printf("k plus grand \n");

    //division
    k = j/5;
    printf("division de %i(j) par 5 = %i(k)\n",j,k);
    if (j > k) printf("j plus grand\n");
    else printf("k plus grand\n");

    
}