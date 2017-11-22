#include<stdio.h>
int main()
{
	int a1[20],a2[20];
	int n[40];
	int n1,n2,i,j,k;
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
	for(i=0;i<n1;i++)
	{
		
		n[i] = a1[i];
	}

for(j=0;j<n2;j++)
	{
		printf("entry");
		k=0;
		while(k<i)
		{
			if(n[k]==a2[j])
			{
			break;
					}	
			else if(k==(i-1) && n[k]!=a2[j])
			{
				n[i] = a2[j];
				i++;
				}	
				k++;
		}
	}
	printf("elements after union");
	for(j=0;j<i;j++)
	{
		printf("%d",n[j]);
	}
	
}
