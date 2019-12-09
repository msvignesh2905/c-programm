#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0,rem;
	printf("\nenter thre number: ");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	
	}
	printf("sum of digit is: %d",sum);
}
