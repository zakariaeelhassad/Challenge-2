#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main()
{
    int annee , jour , mois1 ;
    char mois[12][10]={ "janvier", "fevrier", "mars", "avril", "mai", "juin", "juillet", "août", "septembre", "octobre", "novembre", "decembre"};
    
    printf("entre jour :");
    scanf("%d",&jour);
    printf("entre mois :");
    scanf("%d",&mois1);
    printf("entre annee :");
    scanf("%d",&annee);
    for( int i=0 ; i<12 ; i++){
        if(mois1 == i){
            printf("%d-%s-%d",jour,mois[i],annee);
        }
    }
    return 0;
}