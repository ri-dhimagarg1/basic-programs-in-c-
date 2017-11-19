#include<stdio.h>
int main()
{
	long n,num;
	int freq[10],i,l;
	printf("enter the no.");
	scanf("%ld",&n);
	for(i=0;i<10;i++)
	{
		freq[i]=0;
		}	
	num =  n;
	while(num!=0)
	{
		l = num%10;
		freq[l]++;
		num/=10;
	}
		for(i=0;i<10;i++)
	{
		printf("%d",freq[i]);
		}
}
