#include<stdio.h>
int main()
{
	int i,n,__c_star;
	printf("enter n");
	scanf("%d",&n);
	__c_star=0;
	for(i=1;i<=n;)
	{
		if(__c_star<i)
		{
			printf("*");
			__c_star++;
			continue;
				}	
		else if(__c_star==i)
		{
			printf("\n");
			i++;
			__c_star=0;
				}		
			
	}
}
