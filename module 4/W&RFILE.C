#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *z;
    char ch[20];
    int i;
    clrscr();
    z = fopen("hello.txt","w");
    fprintf(z,"SavaliaDhruvil");
    fclose(z);
  z = fopen("hello.txt","r");
  //printf(z,"Savalia Dhruvil%d");
  //fprintf("%d",z);
  fscanf(z,"%s",&ch);
  printf("\n%s",ch);
  fclose(z);
  getch();
}
