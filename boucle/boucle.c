#include <stdio.h>
#include <math.h>
int main(){
    int puissance = 1;
    int nombre = 10;
    int i;
    for (i= 0 ; i <= nombre ; i++)
    {
        printf("%i\n",puissance);
        printf("%i\n",i);
        puissance = pow(2,i);
    }
    }