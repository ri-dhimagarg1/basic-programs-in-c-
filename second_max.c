#include<stdio.h>
int main()
{
	int a[20];
	int max1 , max2 , i;
	printf("enter number of arrays");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	max1 = a[0];
	max2 = a[1];
	for(i=1;i<5;i++)
	{
		if(a[i]>max1)
		{
			max2 = max1;
			max1= a[i];
			
		}
		else if(a[i]>max2)
		{
			max2 = a[i];
		}
	}
	printf("%d",max2);
	
}
