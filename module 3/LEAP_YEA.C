#include<stdio.h>
#include<conio.h>
int main()
{
    //1)1200,1600,2000,2400 etc
    //2) 2012,2016,2020......2096 and
    //3) 2100,2200,2300,2500
 int y;
 clrscr();
 printf("enter any year");
 scanf("%d",&y);
 if(y%400==0 ||y%4==0 && y!=0)
  {
  printf("it is your leap year");

  }
  else
  {
  printf("it is not your leap year");

  }
  getch();

  }

