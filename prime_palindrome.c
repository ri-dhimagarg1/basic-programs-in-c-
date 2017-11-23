#include<stdio.h>
#include<math.h>
//function to check whether number is prime or not
int is_prime(int n)
{
	int i;
	for(i=2;i<sqrt(n);i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
//check whether where number is palindrome or not
int is_palindrome(int n)
{
	int rev=0;
	int temp;
	temp = n;
	while(temp>0)
	{
		rev = (rev*10)+ (temp%10);
		temp /=10;
	}
	//printf("%d",rev);
	if(rev == n)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n;
	int res1,res2;
	printf("enter number");
	scanf("%d",&n);
	res1 = is_prime(n);
	res2 = is_palindrome(n);
	//if both function returns true(1) then print prime palindrome
	if(res1 & res2)
	{
		printf("number is prime palindrome");
	}
	else
	{
		printf("number is not prime palindrome");
	}
}
