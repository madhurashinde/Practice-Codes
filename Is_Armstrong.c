#include<stdio.h>

int main()

{
	
	int sum=0,n,b,rem;
	
	printf("Enter the number\n");
	
	scanf("%d",&n);
	b=n;
	
	while(b!=0)
	
	{
		
		rem=b%10;
		
		sum=sum+(rem*rem*rem);
		
		b=b/10;
	
	}
	
	if(sum==n)
	
	{
		
	printf("The number is an armstrong\n");
	
	}
	
	else
	
	{
		
	printf("The number is not an armstrong\n");
	
	}

}
		
