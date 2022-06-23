#include<stdio.h>

int main()
{
	int a ,b ,x=6,y=12,t,one;
	a=x;
	b=y;
	while(b!=0)
	{
		t=b;
		b=a%b;
		a=t;
	}
	one = a;
	printf("%d",one);
}