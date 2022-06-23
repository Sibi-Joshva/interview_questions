#include<stdio.h>
int f(int *a, int n)
{
	if(n<=0)
	{
		return 0;
	}
	else if(*a%2==0)
	{
		return *a+f(a+1,n-1);
	}
	else
	{
		return *a-f(a+1,n-1);
	}
}

void main()
{
	int a[] = {2,37,15,7,11,6,14};
	printf("%d",f(a,7));
	getchar();
}