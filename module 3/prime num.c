#include<stdio.h>
#include<conio.h>
void main()
{

int i,n,r=0;

clrscr();
printf("enter any number:");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
r=1;
 break;

}

if (r==0)
{
printf("it is your prime number");

}
else
{
printf("it is not your prime number");

}
getch();
