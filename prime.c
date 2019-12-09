#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,p=0;
	printf("\nenter the number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			p++;
		}
		
	}
	if(p==2)
	{
		printf("prime");
		
	}
	else
	{
		printf("nor prime");
	}
	return 0;
}

