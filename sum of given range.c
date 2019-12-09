#include<stdio.h>
#include<conio.h>
int main()
{
	
	int n1,n2,i,sum=0;
	printf("starting range: ");
	scanf("%d",&n1);
	printf("ending range: ");
	scanf("%d",&n2);
	for(i=n1;i<=n2;i++)
	{
		sum=sum+i;
	}
	printf("\nsum of range: %d",sum);
	
}
