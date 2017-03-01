#include<stdio.h>

int main()

{
	
	float num1,num2,num3;
	
	printf("enter the numbers");
	
	scanf("%f%f%f",&num1,&num2,&num3);
	
	if(num1>num2)
	
	{
		
		if(num2>num3)
		
		{
			
			printf("num1 is greatest\n");
			
		}
	
	}
	
	else if(num2>num3)
	
	{
			
		if(num2>num1)
			
		{
				
			printf("num2 is greatest\n");
			
		}
	
	}
	
	else
	
	{
		
		printf("num3 is greatest\n");
	
	}

}
	  

