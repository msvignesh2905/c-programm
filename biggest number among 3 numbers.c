 #include<stdio.h>
 #include<conio.h>
 int main()
 {
 	int n1,n2,n3;
 	printf("enter three numbers:   ");
 	scanf("%d",&n1);
 	printf("enter three numbers:   ");  
 	scanf("%d",&n2);
 	printf("enter three numbers:   ");
 	scanf("%d",&n3);
 	
 	if(n1>=n2 && n1>=n3)
 	{
	   printf("%d is the largest number is: ",n1);
 	}
 	else if(n2>=n1 && n2>=n3)
 	{
	   printf("%d is the largest number is: ",n2);
	}                 
	else
	{
	   printf("%d is the largest number is: ",n3);
 	}
return 0;
 	               
}
