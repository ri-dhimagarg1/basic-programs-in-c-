#include<stdio.h>
int main()
{
	int arr[20],n[20];
	int i,j,k=0,l;
	int no;
	printf("enter number of elements");
	scanf("%d",&no);
	printf("enter array elements");
	for(i=0;i<no;i++)
	{
		scanf("%d",&arr[i]);
	}
	n[0] = arr[0];
	l=1;
	for(i=1;i<no;i++)
	{
		j=(i-1);
		k=j;
		while(k>=0)
		{
			if(arr[k]==arr[i])
			{
				break;
			}
			else if(k==0 && arr[k]!=arr[i])
			{
				n[l] = arr[i];
				l++;
				break;
			}
			else
			{
				k--;
			}
		}
		
	}
	for(i=0;i<l;i++)
	{
		printf("%d",n[i]);
	}
	}
