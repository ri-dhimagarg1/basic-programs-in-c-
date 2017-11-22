#include<stdio.h>
int main()
{
	int n,i,j,a1[20][20],a[40],k=0,temp;
	// size of elements
	printf("enter n");
	scanf("%d",&n);
	//entering matrix
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a1[i][j]);
		}
		printf("\n");
	}
	//converting to 1-d array
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			a[k] = a1[i][j];
			k++;
		}
	}
	//printing of 1-d array
	for(i=0;i<k;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
	//sorting of 1-d array	
    for(i=0;i<k;++i)
    {
    for(j=i+1;j<k;++j)
     {
         if(a[i]>a[j])  
/* To sort in descending order, change > to <. */
          {
             temp=a[i];
             a[i]=a[j]; 
             a[j]=temp;
         }
    }
	}
	//printing of sorted 1-d array	
	for(i=0;i<k;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
	//printing of 2-d sorted array
	k=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",a[k]);
			k++;
		}
		printf("\n");
	}
}

