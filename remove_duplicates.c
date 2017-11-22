//Program to remove duplicates from an array
/**
	Ridhima garg
**/
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
	//copying first element in new array.
	n[0] = arr[0];
	l=1;// indexing for new array without duplicates
	
	for(i=1;i<no;i++)
	{
		j=(i-1);
		k=j;
		while(k>=0)
		{
			//if array already having that value then break out of loop
			if(arr[k]==arr[i])
			{
				break;
			}
			//if array dont have that value ,simply insert this element to new arry.
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
	//printing of elements of new array without duplicates
	for(i=0;i<l;i++)
	{
		printf("%d",n[i]);
	}
	}
