#include<stdio.h>
int main()
{
	int n,num,sum=0,j=0,len=0;
	int a[20];
	printf("enter number");
	scanf("%d",&n);
	num =n;
	while(num>0)
	{
		len++;
		num = num/10;
		
	}
	//printf("%d",len);
	while(n>0)
	{
		j = n%10;
		//printf("%d",pow(j,len));
		sum = sum + pow(j,len);
		n = n/10;
	}
	printf("%d",sum);
	if(sum==n)
	{
		printf("number is armstrong");
	}
	else
	{
		printf("number is not armstrong");
	}
}
