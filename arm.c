#include<stdio.h>
#include<conio.h>
int main()
{
	int n,sum=0,rem,temp;
	printf("enter num : ");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		rem=n%10;
		sum=sum*10 + rem;
		n=n/10;
	}
	if(temp==sum)
	{
		printf("palindrome");
	}
	else
	{
		printf("not palindrome");
		
	}

}
