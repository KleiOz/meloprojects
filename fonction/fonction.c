#include <stdio.h>
#include <math.h>

int plus_petit (int a, int b) {
    if (a < b) return (a);
    else return (b);
}
int main(){
    int a,b;
    int r;

    printf("saisir a: ");
    scanf("%i",&a);
    printf("saisir b: ");
    scanf("%i",&b);
    r = plus_petit(a,b);
    printf("c'est %i le plus petit\n",r);
}
