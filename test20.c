#include<stdio.h>

int main()
{
	int i, n=11,d1 =0 ,d2 =0;
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			d1=d1+i;
		}
		else
		{
			d2=d2+1;
		}
	}
	printf("D1 = %d,",d1);
	printf("D2 = %d",d2);
}