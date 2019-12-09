#include<stdio.h>
#include<conio.h>
int main()
{
	int dividend,divisor,quotient,remainder;
	printf("enter the dividend value: ");
	scanf("%d",&dividend);
	printf("enter the divisor value: ");
	scanf("%d",&divisor);
	quotient = dividend/divisor;
	remainder= dividend%divisor;
	printf("\nthe quotient value is : %d",quotient);
	printf("\nthe remainder value is : %d",remainder);
	return 0;
}
