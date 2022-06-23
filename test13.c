#include<stdio.h>

void magic(int m)
{
	int n,i=1,j=0,k=0;
	n=m;
	while(n>0)
	{
		n=n/10;
		i=1*10;
	}
	i = i/10;
	while(i>0)
	{
		j=(m/i);
		if(j%3==0)
		{
			k=(k*10)+1;
		}
		else
		{
			k= k*10;
		}
		i=i/10;
	}
	printf("%d",k);
}
int main()
{
	magic(23642);
}