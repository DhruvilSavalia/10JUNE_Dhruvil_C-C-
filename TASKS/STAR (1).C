#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    clrscr();
    for(i=1;i<=7;i++)
    {
       for(j=1;j<=5;j++)
       {
	  if(i==1&&j>=1&&j<5  ||  j==1&&i>1  ||  (j==5&&i>1)  ||  (j==5) || (i==5))
	  {
	      printf("* ",j);

	  }
	  else
	  {
	    printf("  ");
	  }

       }
    printf("\n");
   }

getch();

}


