#include<stdio.h>
#include<conio.h>
void main()
{
float rate,amt,time,si,ci;
clrscr();
printf("enter amt");
scanf("%f",&amt);
printf("enter rate");
scanf("%f",&rate);
printf("enter time");
scanf("%f",&time);
si=(amt*rate*time)/100;
printf("it is your simple interest:%f\n",si);
ci=amt*(1+rate/100)*time-amt;
printf("it is your compound interest:%f",ci);
getch();

}
