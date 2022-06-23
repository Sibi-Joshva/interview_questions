#include<stdio.h>
int main()
{
	int count=0,a[5]={1,0,4,2,3},i;
	for(i=0;i<5;i=i+1)
	{
		if(a[a[i]]%2==0)
		{
			count = count+2;

		}
		if(a[i]%2==0)
		{
			count=count+3;
		}
		if(i%2==0)
		{
			count=count-1;
		}
	}
	printf("%d",count);
}