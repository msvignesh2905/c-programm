#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,range;
	printf("enter the number: ");
	scanf("%d",&n);
	printf("\nenter the given range :");
	scanf("%d",&range);
	for(i=1;i<=range;i++)
	{
		printf("\n%d * %d = %d",i,n,i*n);
	}
	
}
