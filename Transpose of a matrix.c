#include<stdio.h>

int main()

{
	
	int a[10][10],i,j,row,col;
	
	printf("Enter the no. of rows and columns");
	
	scanf("%d%d",&row,&col);
	
	printf("Enter the values");
	
	for(i=0;i<row;i++)
	
	{
		
		for(j=0;j<col;j++)
		
		{
			
			scanf("%d",&a[i][j]);
		
		}
	
	}
	
	for(i=0;i<col;i++)
	
	{
		
		for(j=0;j<row;j++)
		
		{
			
			printf("%d",a[j][i]);
		
		}
		
		printf("\n");
	
	}

}
