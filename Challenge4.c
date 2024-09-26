#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int a , b ,c,delta , s , s1 , s2;
    printf("entrer les nomber a , b et c (ax²+bx+c) : ");
    scanf("%d%d%d",&a,&b,&c);

    delta = pow(b,2)-4*a*c;
    if(delta==0){
        s=(-b)/(2*a);
        printf("les solutions possibles d'une equation : %d ",s);
    }
    else if(delta >0){
        s1=( (-b) + (sqrt(delta) ) / (2*a));
        s1=( (-b) - (sqrt(delta) ) / (2*a));
        printf("les solutions possibles d'une equation : %d et %d ",s1 , s2);
    }
    else {
        printf("n'est pas des solutions possibles de cette equation  ");
    }
    return 0;
}