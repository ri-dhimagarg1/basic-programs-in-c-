// minimum number of notes or coins required to pay a certian amount of value
#include<stdio.h>
int main()
{
	int n,v,i,a[20],c=0;
	printf("enter the no. of notes and coins");
	scanf("%d",&n);
	printf("enter the value for which minum number of notes required to be searched");
	scanf("%d",&v);
	printf("enter the value of each coin and note in descending order");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	i=0;
	while(i<n)
	{
		if(v>=a[i]&&v!=0)
		{
			v = (v-a[i]);
			c++;
			i=0;
		}
		else
		{
			i++;
		}
	}
	printf("%d",c);	
}
