#include <stdio.h>
#include <stdlib.h>
#include "TXLIb.h"
#include <math.h>

main()
{   float a,b,c;
    float disk;


    printf("��� ��������� ������ ��������� ���� a*x^2+b*x+c=0,\n��� a,b,c - ������������ \n");


    printf("a=");
    scanf("%f",&a);
    printf("\n");


    while (a==0)
    {
        printf("��� �� ���������� ���������, ��� ��� ������� ����������� �� ����� 0!\n");
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
        printf("��������� �� ����� �������������� �������");
    }
    else if (disk==0){

        printf("��������� ����� ������������ ������ x=%.1f",(-b/(2*a)));
        return 0;

    }
    else {
        printf("��������� ����� ��� �����: \nx1=%.1f \nx2=%.1f",((-b+sqrt(disk))/(2*a)),((-b-sqrt(disk))/(2*a)));
        return 0;
    }



}
