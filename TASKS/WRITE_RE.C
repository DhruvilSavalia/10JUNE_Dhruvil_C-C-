#include<stdio.h>
#include<conio.h>
int main()
{
   FILE *p;
   char ch[20],r;
   clrscr();
   p=fopen("hello.txt","w");
   fprintf(p,"PATEL DHRUVIL");
   fclose(p);
   p=fopen("hello.txt","r");
   printf("PATEL DHRUVIL");
   fscanf(p,"%s",&ch);
    fprintf(p,"%s",ch);
   fclose(p);
   getch();

}

