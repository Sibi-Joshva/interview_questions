#include<stdio.h>

int main()
{
	int i=0,a=2,b=3,c=3;
	while(i<4)
	{
		b=c;
		printf("%d ",b);
		i=i+1;
		c=a;
		a=a+1;
	}
}