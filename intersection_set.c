#include<stdio.h>
int main()
{
	int a1[20],a2[20],n[40];
	int n1,n2,i,j,max,min,k;
	printf("enter no.of elements of n1 and n2");
	scanf("%d %d",&n1,&n2);
	printf("enter elements of first set");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a1[i]);
	}
	printf("enter elements of second set");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&a2[i]);
	}
	max = (n1>n2)?n1:n2;
	min = (n1<n2)?n1:n2;
	k=0;
	if(max==n1)
	{
	for(i=0;i<max;i++)
	{
		for(j=0;j<min;j++)
		{
			if(a1[i]==a2[j])
			{
				n[k]=a1[i];
				k++;
				break;
			}
		}
	}
}
	if(max==n2)
	{
	for(i=0;i<max;i++)
	{
		for(j=0;j<min;j++)
		{
			if(a2[i]==a1[j])
			{
				n[k]=a2[i];
				k++;
				break;
			}
		}
	}
}
printf("intersection of sets");
	for(i=0;i<k;i++)
	{
		printf("%d ",n[i]);
	}
}
