#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("entre un nomber :");
    scanf("%d",&a);
    if(a%2==0){
        printf("le nomber %d est pair\n",a);
    }
    else {
        printf(" le nomber %d est impair  \n",a);
    }

    return 0;
}