#include<stdio.h>
#include<conio.h>
int main()
{
	int n,rem=0,temp,sum=0;
	printf("\nenter the number: ");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{ 
	  rem=n%10;
	  sum=sum+(rem*rem*rem);
	  n=n/10;
	}
	if(temp==sum)
	{
		printf("\n%d is Armstrong",temp);
	}
	else
	{
		printf("\n%d is not Armstrong",temp);
	}
    return 0;	
}
