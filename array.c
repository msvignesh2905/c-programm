#include<stdio.h>
#include<conio.h>
int main()
{
	int marks[5];
	int sum=0,i;
	for(i=0;i<5;i++)
	{
		printf("\nenter the marks: ");
		scanf("%d",&marks[i]);
	}
	for(i=0;i<5;i++)
	{
		sum=sum+marks[i];
	}
	printf("\nsum of marks: %d",sum);
}
