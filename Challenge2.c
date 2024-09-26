#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    printf("entre un nomber :");
    scanf(" %c",&a);

    switch(a){
        case 'a' : printf("%c est une voyelle",a);
        break;
        case 'e' : printf("%c est une voyelle",a);
        break;
        case 'u' : printf("%c est une voyelle",a);
        break;
        case 'i' : printf("%c est une voyelle",a);
        break;
        case 'o' : printf("%c est une voyelle",a);
        break;
        case 'y' : printf("%c est une voyelle",a);
        break;
        default : printf("%c est non une voyelle",a);
        break;

    }
    return 0;
}
