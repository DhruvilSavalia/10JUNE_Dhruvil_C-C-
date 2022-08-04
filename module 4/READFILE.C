#include<stdio.h>
#include<conio.h>
void main()
{
   char ch[20];
    FILE *a;
    clrscr();
    a=fopen("hello.txt","r");
  //  printf("PATEL DHRUVIL");
    fscanf(a,"%s",&ch);
   // printf("file data is:%s",ch);
    printf("\n%s",ch);
    fclose(a);
    getch();
 }