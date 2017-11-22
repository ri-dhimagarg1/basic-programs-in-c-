#include<stdio.h>
int second_most(int arr[],int n)
{
	int count[1000] = {0},i;
	int first=0,second=0;
//	int max=0;
//	for(i=0;i<n;i++)
//	{
//		if(arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
	for(i=0;i<n;i++)
	{
		(count[arr[i]])++;
	}
	for(i=0;i<n;i++)
	{
		if(count[i]>count[first])
		{
			second = first ;
			first = i;
		}
		else if((count[i]>count[second]) && (count[i]!=count[first]))
		{
			second =i;
		}
	}
	//printf("%c",second);
	return second;
	
}

int main(){
	int arr[20],n,i;
	printf("enter n");
	scanf("%d",&n);
	printf("enter array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int res;
	//second_most(str);
	res = second_most(arr,n);
	if(res!='\0')
	{
		printf("second most frequent int is %d",res);
	}
	else
	{
		printf("no int");
	}
	
}
