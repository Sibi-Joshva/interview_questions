#include<stdio.h>

int main()
{
	int i,result = 10;
	for(i=1;i<10;i+=i+1)
	{
		if(i%6==0)
		{
			result = result+1;
			break;
		}
		else if(i%2==0)
		{
			continue;
		}
		result=result+10;
	}
	printf("%d",result);
}