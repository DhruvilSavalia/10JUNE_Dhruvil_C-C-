#include<stdio.h>
#include<conio.h>
void main()
{
    int i,ary[10],max=0;
    clrscr();
    printf("enter any ten elements of array:");
    for(i=0;i<10;i++)
    {
    scanf("%d",&ary[i]);
    }
   for(i=0;i<10;i++)
   {
       if(max<ary[i])
       {
	 max=ary[i];
       }
   }
     printf("maximum value is:%d",max);
  getch();
 }

