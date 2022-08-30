#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("calculator.txt","w");
	float a,b;
	int choice;
	do
	{
	    printf("Enter any two values:");
		scanf("%f %f",&a,&b);
		printf("Enter any choice:\n");
		scanf("%d",&choice);
		
	    switch (choice)
	     {
		    case 1:
		    fprintf(fp,"%f + %f : %f \n",a,b,a+b);
		    break;
			case 2:
			fprintf(fp,"%f- %f : %f \n",a,b,a-b);
			break;
			case 3:
			fprintf(fp,"%f * %f : %f \n",a,b,a*b);
			break;
			case 4:
			fprintf(fp,"%f / %f : %f \n",a,b,a/b);
			break;
			case 0:
			printf("when we enter 0 then calculator is end:");
			break;
		    default :
		    printf("Enter wrong Choice:\n");
		    break;
         }
   }while(choice!=0);
   return 0;
   fclose(fp);
}

