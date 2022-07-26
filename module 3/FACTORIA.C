#include<stdio.h>
#include<conio.h>
long int factorial(int no)
{
      if(no<=1)
	 return 1;
       return no*factorial(no-1);

}
void main()
{
       int no;
       clrscr();
       printf("factorial:",no);
       scanf("%d",&no);
       printf("factorial:%ld",factorial(no));
       getch();
}



