#include<stdio.h>
char second_most(char *str)
{
	int count[256] = {0},i;
	int first=0,second=0;
	for(i=0;str[i];i++)
	{
		(count[str[i]])++;
	}
	for(i=0;i<256;i++)
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
	char str[] = "geeksforgeeks";
	int res;
	//second_most(str);
	res = second_most(str);
	if(res!='\0')
	{
		printf("second most frequent char is %c",res);
	}
	else
	{
		printf("no char");
	}
	
}
