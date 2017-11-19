#include<stdio.h>
int main()
{
	int n=7,i,j,flag;
	for(i=1;i<=n;i++)
	{
		flag =1;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				flag = 0;
				break;
			}
			
		}
		if(flag==1)
		{
			printf("%d is prime",i);
		}
	}
}
