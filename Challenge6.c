#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a ;
    printf("entrer un nomber : ");
    scanf("%d",&a);

    if(a < 0 ){
        printf(" le nombre est négatif");
    }
    else if(a > 0){
        printf("le nombre est positif");
    }
    else {
        printf("le nombre est égal à zéro");
    }
    return 0;
}