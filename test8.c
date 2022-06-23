#include<stdio.h>

int main()
{
	int a=5;
	while(a>3)
	{
		a = a-2;
		printf("%d ",a*a);
		do
		{
			printf("%d ",a+a);
		}while(a>10);
		a=a+1;
	}
}