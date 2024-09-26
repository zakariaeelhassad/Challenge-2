#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main()
{
    char jours[7][10]={"dimanche", "lundi","mardi", "mercredi", "jeudi" , "vendredi" ,"samedi"};
     int index = rand() % 7;
    
    printf("Jour aléatoire de la semaine : %s\n", jours[index]);
    
    return 0;
}