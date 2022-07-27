#include<stdio.h>
#include<conio.h>
void main()
{
	int n=5;
	int a,b,c;
	clrscr();

	 for (a=5;a>=1;a--)
	 {
		for(b=a;b<n;b++)
		{
			printf(" ");
		}
		for (c=1;c<=a;c++)
		{
			printf("*");
		}
		printf("\n");
		n--;
	 }
	 getch();
}
