#include <stdio.h>
#include <stdlib.h>
#include "TXLIb.h"
#include <math.h>

main()
{   float a,b,c;
    float disk;


    printf("Эта программа решает уравнения вида a*x^2+b*x+c=0,\nгде a,b,c - коэффициенты \n");


    printf("a=");
    scanf("%f",&a);
    printf("\n");


    while (a==0)
    {
        printf("Это не квадратное уравнение, так как старший коэффициент не равен 0!\n");
        printf("a=");
        scanf("%f",&a);
        printf("\n");
    }

    printf("b=");
    scanf("%f",&b);
    printf("\n");

    printf("c=");
    scanf("%f",&c);
    printf("\n");

    disk=b*b-4*a*c;
    if (disk<0)
    {
        printf("Уравнение не имеет действительных решений");
    }
    else if (disk==0){

        printf("Уравнение имеет единственный корень x=%.1f",(-b/(2*a)));
        return 0;

    }
    else {
        printf("Уравнение имеет два корня: \nx1=%.1f \nx2=%.1f",((-b+sqrt(disk))/(2*a)),((-b-sqrt(disk))/(2*a)));
        return 0;
    }



}
