#include<stdio.h>

int fun(int m,int n, int mat[3][3])
{
	int i = 0,j = 0,sum =0;
	for (i=0;i<3;i=i+1)
	{
		for(j=0;j<3;j=j+1)
		{
			if(i==j)
			{
				sum =sum +mat[i][j];
			}
		}
		if(i<3 && j<4)
		{
			sum = sum+mat[i][j-1];
		}
	}
	return sum;
}

int main()
{
	int matrix[3][3] = {(1,2,3),(5,6,7),(9,10,11)},k;
	k = fun(3,3,matrix);
	printf("%d",k);
}