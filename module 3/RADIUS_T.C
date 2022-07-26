#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int a,b,c;
	float s,area;
	clrscr();
     printf("enter the radius of triangle:");
     scanf("%d%d%d",&a,&b,&c);
     s=(a+b+c)/2;
     s=s*(s-a)*(s-b)*(s-c);
     area=sqrt (s);
     printf("area of triangle is %f",area);
  getch();
 }