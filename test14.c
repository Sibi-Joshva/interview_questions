#include<stdio.h>
void magic(int a[],int asize,int b[],int bsize)
{
	int i,c[10]={0,0,0,0,0,0,0,0,0,0};
	for(i=0;i<asize;i++)
	{
		c[a[i]] = c[a[i]]+1;
	}
	for(i=0;i<bsize;i++)
	{
		if(c[b[i]]!=0)
		{
			printf("%d",b[i]);
			c[b[i]]=c[b[i]]-1;
		}
	}
	printf("\n");
}
int main()
{
	int aa[5]={5,6,4,2,2};
	int bb[6]={4,2,2,5,5,3};

	magic(aa,3,bb,6);
	return 0;
}