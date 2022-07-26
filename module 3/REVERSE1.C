#include<stdio.h>
#include<conio.h>
int main()
{
   long int n,r,s=0;
    clrscr();
    printf("enter number:");
    scanf("%ld",&n);

	while(n!=0)
	{
	    r=n%10;
	    s=s*10+r;
	    n=n/10;
	}
	printf("number %ld",s);
getch();

}
