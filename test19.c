#include<stdio.h>

int main()
{
	int count=7,x=0;
	for(x=23;x<100;x=x+5)
	{
		if(x%2==0)
		{
			count=count+2;
		}
		else
		{
			count=count-1;
		}
	}
	printf("%d",count);
}