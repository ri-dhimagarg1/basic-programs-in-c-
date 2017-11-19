#include<stdio.h>
int main()
{
	int n1,n2;
	int max,i;
	printf("enter 2 nos.");
	scanf("%d %d",&n1,&n2);
	max = (n1>n2) ? n1 : n2;
	printf("%d",max);
	i = max;
	while(i)
	{
		if(i%n1==0 && i%n2==0)
		{
			printf("%d is lcm ",i );
			break;
		}
		i+=max;
	}
	
}
