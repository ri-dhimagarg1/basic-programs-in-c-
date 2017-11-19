#include<stdio.h>
int main()
{
	long n,h;
	long rev=0;
	printf("enter no.");
	scanf("%ld",&n);
	while(n!=0)
	{
		h=n%10;
		rev = (rev*10) +h;
		n= n/10;
	}
	printf("%ld",rev);
	if(n==rev)
	{
		printf("palindrome");
	}
	else
	{
		printf("not a palindrome");
	}
}
