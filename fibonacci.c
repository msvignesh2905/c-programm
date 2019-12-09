#include<stdio.h>
#include<conio.h>
int main()
{
	int n,n1=0,n2=1,next,i;
	printf("enter the number: ");
	scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			printf("%d\n",n1);
			next=n1+n2;
			n1=n2;
			n2=next;
		}
	
}

