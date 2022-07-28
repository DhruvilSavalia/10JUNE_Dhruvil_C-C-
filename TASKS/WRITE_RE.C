#include<stdio.h>
#include<conio.h>
int main()
{
   int no,i,j;
   FILE *a;
   char ch[20];
  // char ch[20],no,i,j;
   clrscr();
  // p=fopen("hello.txt","w");
  a=fopen("Table.txt","w");
  // fprintf(p,"PATELDHRUVIL");
  printf("Enter number:");
  scanf("%d",&no);
  for(i=1;i<=10;i++)
  {
  j=no*i;
    fprintf(a,"\n%d*%d=%d\n",no,i,j);
  }
   fclose(a);
 //  getch();

   a=fopen("Table.txt","r");
 //printf("PATEL DHRUVIL");
    fprintf("%d",a);
	     for(i=1;i<=10;i++)
	      {
	    //j=no*i;
	    //fprintf("\n%d",a);

  fscanf(a,"%s",&ch);
  printf("\n%s",ch);
  }
  fclose(a);
  getch();

}

