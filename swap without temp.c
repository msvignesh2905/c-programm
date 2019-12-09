#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("enter 1st num: ");
	scanf("%d",&a);
	printf("enter 2nd num: ");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nafter swap 1st value: %d",a);
	printf("\nafter swap 2nd value: %d",b);
}
