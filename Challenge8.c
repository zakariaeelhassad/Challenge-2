#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a ;
    printf("entrer la moyenne de notes : ");
    scanf("%d",&a);

    if(a < 10 ){
        printf("il est recale");
    }
    else if(a >= 10 && a < 12 ){
        printf("il obtient la mention passable");
    }
    else if(a >= 12 && a < 14 ){
        printf("il obtient la mention assez bien");
    }
    else if(a >= 14 && a < 16 ){
        printf("il obtient la mention bien");
    }
    else if (a >= 16 && a < 20 ){
        printf("il obtient la mention tres bien");
    }
    return 0;
}