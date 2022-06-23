#include<stdio.h>

int main()
{
	int a, b=5 ,c,n=1,arr[]={7,13,5,31,53,21};
	a=0;
	c=(a+b)/2;
	while(a<=b)
	{
		if(arr[c]<n)
		{
			a=c+1;
		}
		else if(arr[c] == n)
		{
			printf("%d\n",c+1);
			break;
		}
		else
		{
			b = c-1;
		}
		c=(a+b)/2;
	}
	if(a>b)
	{
		printf("%d\n",n);
	}
	return 0;
}