#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a , b , s;
    printf("entrer le nomber a: ");
    scanf("%f",&a);
    printf("entrer le nomber b: ");
    scanf("%f",&b);
    if( a == b){
        s=pow((a+b),3);
        printf("%.2f + %.2f = %.2f",a,b,s);
    }
    else {
        printf("%.2f + %.2f = %.2f",a,b,a+b);
    }
    return 0;
}