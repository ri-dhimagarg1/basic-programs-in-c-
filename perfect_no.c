#include<stdio.h>
int main()
{
	int n,i,j=0,sum=0;
	int a[20];
	printf("enter number");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			a[j]=i;
			j++;
		}
	}
	for(i=(j-1);i>=0;i--)
	{
	//	printf("%d",a[i]);
		sum +=a[i];
	}
	printf("%d \n",sum);
	if(sum==n)
	{
		printf("no. is perfect");
	}
	else
	{
		printf("not perfect");
	}
}
