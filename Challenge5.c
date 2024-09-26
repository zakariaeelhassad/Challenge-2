#include <stdio.h>
#include <stdlib.h>

int main()
{
    int annee , mois , jours , heures ,minutes, secondes ;
    printf("entre l'annee : ");
    scanf("%d",&annee);

    mois =  annee * 12 ;
    jours = annee * 365 ;
    heures = annee * 365 * 24 ;
    minutes = annee * 365 * 24 * 60 ;
    secondes = annee * 365 * 24 * 60 *60 ;

    int b ;
    printf("1. mois \n");
    printf("2. jours \n");
    printf("3. heures \n");
    printf("4. minutes \n");
    printf("5. secondes \n");
    printf("entre choice : ");
    scanf("%d",&b);

    switch(annee){
        case 1 : printf("mois : %d",mois);
        break;
        case 2 : printf("jours : %d",jours);
        break;
        case 3 : printf("heures : %d",heures);
        break;
        case 4 : printf("minutes : %d",minutes);
        break;
        case 5 : printf("secondes : %d",secondes);
        break;
    }


    return 0;
}
