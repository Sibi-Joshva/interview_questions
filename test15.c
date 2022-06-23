#include<stdio.h>
int odd(int a)
{
	if(a%2==0)
		return 0;
	else
		return 1;
}
int main()
{
	int a=2;
	int b=30;
	while(b)
	{
		if(odd(b))
		{
			printf("hello world");
		}
		a = a*a;
		b=b/2;
	}
}