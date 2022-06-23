#include<stdio.h>
int main()
{
	int i = 0;
	int a[3] = {1,4,3};
	int b[3]={6,1,9};
	for(i=0;i<3;i=i+1)
	{
		if(i%2==0 && (i+1<3))
		{
			b[i+1]=a[i];
			b[i]=a[i+1];

		}
	}
	for(i=0;i<3;i=i+1)
	{
		printf("%d ",b[i]);
	}
}