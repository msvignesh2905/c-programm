#include<stdio.h>
#include<conio.h>
int main()
{
	float n1,n2,result;
	char ch;
	printf("enter the 1st number: ");
	scanf("%f",&n1);
	printf("choose the operatoor you want( + , - , * , / ): ");
	scanf(" %c",&ch);
	printf("enter the 2nd number: ");
	scanf("%f",&n2);
	
	switch(ch)
	
	{
		
		case '+':
			result=n1+n2;
			break;
		case '-':
			result=n1-n2;
			break;
		 case '*':
			result=n1*2;
			break;
		 case '/':
			result=n1/n2;
			break;
		default:
		     printf("invalid operation");
   }
       printf(" %f %c %f : %f\n",n1,ch,n2,result);
		return 0;   
			
}

