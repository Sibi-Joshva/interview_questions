#include<stdio.h>

int main()
{
	int a=4,b=2,c=0,i;
	for(i=0;i<=3;i=i+1)
	{
		c = a+b;
		printf("%d ",c);
		b=a;
		a=c;
	}
}