#include<stdio.h>
#include<conio.h>
void main()
{
     int *p,*q,r,a,b;
     clrscr();
     printf("enter any two numbers:");
     scanf("%d%d",&a,&b);
     p = &a;
     q = &b;
     r = *p + *q;
    printf("sum of numbers is:%d",r);
    getch();
 }
