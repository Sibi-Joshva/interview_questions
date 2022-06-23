#include<stdio.h>

int main()
{
	int count =0;
	for(int i=1; i<=2;i=i+1)
	{
		for(int j=1;j<=2;j=j+1)
		{
			count = count+1;
			j=j+1;

			for(int k =0;k<j;k=k+1)
			{
				printf("%d ",count = count+1);
			}
			if(j<=3)
			{
				break;
			}
		}
	}
}