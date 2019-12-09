#include<stdio.h>
#include<conio.h>
int main()
{
	int n,n1=0,n2=1,next;
	printf("enter the number: ");
	scanf("%d",&n);
	while(next<=n)
		{
			printf("%d\n",next);
			next=n1+n2;
			n1=n2;
			n2=next;
		}
	
}

