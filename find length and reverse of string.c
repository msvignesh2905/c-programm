#include<stdio.h>
#include<conio.h>
int main()
{ 
    int i,l=0;
	char a[10];
	printf("enter the character: ");
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++)
	{
		l=l+1;
	}
	printf("\nlength of the character: %d",l);
	for(i=l;i>=0;i--) 
	printf("reverse of the given string is: %c",a[i]);
    
 } 
