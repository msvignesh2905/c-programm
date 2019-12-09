#include<stdio.h>
#include<conio.h>
int main()
{
	double first_num,second_num,temp;
	printf("enter the first_num value: ");
	scanf("%lf",&first_num);
	printf("enter the second_nun value: ");
	scanf("%lf",&second_num);
	temp=first_num;
	first_num=second_num;
	second_num=temp;
	printf("\nafter swapping the first_num is: %.2lf",first_num);
	printf("\nafter swapping the second_num is: %.2lf",second_num);
}
