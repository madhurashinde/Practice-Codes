#include<stdio.h>

int main()

{
	
	int a[10][10],i,j,row1,col1,row2,col2,b[10][10],c[10][10];
	
	printf("Enter the no. of rows and columns for mat1");
	
	scanf("%d%d",&row1,&col1);
	
	printf("enter the values for mat1");
	
	for(i=0;i<row1;i++)
	
	{
		
		for(j=0;j<col1;j++)
		
		{
			
			scanf("%d",&a[i][j]);
		
		}
	
	}
	
	printf("Enter the no. of row and columns for mat2");
	
	scanf("%d%d",&row2,&col2);
	
	printf("enter the values for mat2");
	
	for(i=0;i<row2;i++)
	
	{
		
		for(j=0;j<col2;j++)
		
		{
			
			scanf("%d",&b[i][j]);
		
		}
	
	}
	
	if((row1==row2)&&(col1==col2))
	
	{
		
		for(i=0;i<row1;i++)
		
		{
			
			for(j=0;j<col1;j++)
			
			{
				
				c[i][j]=a[i][j]+b[i][j];
				
				printf("%d",c[i][j]);
			
			}
			
			printf("\n");
		
		}
	
	}
	
	else
	
	{
		
		printf("Matrix cannot be added");
	
	}

}


