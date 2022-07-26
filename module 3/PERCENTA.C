#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,c,d,e,total,percent;
clrscr();
printf("enter any five subject mark");
scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
total= a+b+c+d+e;
printf("your total marks %f",total);
percent=total/5;
printf("your total percentage %f",percent);
 if(percent>75)
 {
 printf("distinction");

 }

 else if(percent>60 && percent<=75)
 {
 printf("first class");
 }

 else if(percent>50 && percent<=60)
 {
 printf("second class");
 }

 else if(percent>35 && percent<=50)
 {
 printf("pass class");
 }
 else
 {
 printf("fail");
 }
 getch();
 }

