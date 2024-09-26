#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a ;
    int ascii ;
    printf("entrer un caractere: ");
    scanf(" %c",&a);
    ascii = a +0 ;
    if(ascii >= 65 && ascii <= 90){
        printf("le caractere %c est une lettre majuscule",a);
    }
    else
        printf("le caractere %c n'est pas une lettre majuscule",a);
    return 0;
}