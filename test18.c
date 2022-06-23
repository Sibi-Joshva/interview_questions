#include<stdio.h>

int main()
{
	int i=0,temp =0;
	int a[3]={2,5,1};
	for(i=1;i<3;i=i+1)

		if(a[i]>a[i-1] || a[i]-1 ==0)
		{
			temp=a[i];
			a[i]=a[i-1];
			a[i-1]=temp;
		}
		for(i=0;i<3;i=i+1)
		{
			printf("%d",a[i]);
		}
}