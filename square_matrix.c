#include<stdio.h>
int main()
{
	int n,i,j,a[20][20];
	int sum_check =0,sum=0;
	printf("enter the size of suare matrix");
	scanf("%d",&n);
	printf("enter matrix");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		sum_check += a[i][0];
	}
	printf("%d",sum_check);
	for(i=0;i<n;i++)
	{
		sum =0;
		for(j=0;j<n;j++)
		{
			sum = sum +a[i][j];
		}
		if(sum != sum_check)
		{
			printf("not a square magic");
			exit(0);
		}
	}
	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=0;j<n;j++)
		{
			sum = sum +a[j][i];
		}
		if(sum != sum_check)
		{
			printf("not a square magic");
			exit(0);
		}
	}
	printf("matrix is square magic");
}
