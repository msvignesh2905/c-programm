#include<stdio.h>
#include<conio.h>
int favtorial(int n);
int main()
{
	int n,i;
	printf("enter the number: ");
	scanf("%d",&n);
	printf("favtorial of %d is %d",n,factorial(n));
}
int factorial(int n)
{  
	if(n==0)
	return 1;
	else
	return n*factorial(n-1);
	
}
