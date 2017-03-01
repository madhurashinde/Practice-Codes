#include<stdio.h>

int main()

{
	
	int a=0,b=1,s,cnt;
	
	printf("%d%d",a,b);
	
	cnt=0;
	
	while(cnt<=3)
	
	{
		
		s=a+b;
		
		printf("%d",s);
		
		a=b;
		
		b=s;
		
		cnt++;
	
	}

}
