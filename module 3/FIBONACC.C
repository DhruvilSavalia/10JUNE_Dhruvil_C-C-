#include<stdio.h>
#include<conio.h>
void main()
{
    unsigned int n,f1,f2,f3;
      clrscr();
      printf("enter any number:");
      scanf("%u",&n);
      printf("fibonacci series is:");
      f1=0;
      f2=1;
      printf("%u\t%u",f1,f2);
      f3=f1+f2;
 while(f3<n)
 {
       printf("\t%u",f3);
       f1=f2;
       f2=f3;
       f3=f1+f2;
 }
 getch();
}