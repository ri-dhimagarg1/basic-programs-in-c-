//program to find leaders from an array
//leaders are those elements whose all right-hand side element are smaller than it
#include<stdio.h>
int main()
{
	int a[20];
	int i,j,n;
	int leader;
	printf("enter no. of elements");
	scanf("%d",&n);
	printf("enter elements of a");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=(i+1);j<n;j++)
		{
			leader = 1;
			if(a[j]>=a[i])
			{
				leader =0;
				break;
			}
		}
		if(leader==1)
		{
			printf("%d",a[i]);
		}
	}
}
