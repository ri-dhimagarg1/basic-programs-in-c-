#include<stdio.h>
char first_most(char *str)
{
	int count[256] = {0},i;
	int first=0;
	for(i=0;str[i];i++)
	{
		(count[str[i]])++;
	}
	for(i=0;i<256;i++)
	{
		if(count[i]>count[first])
		{
			first = i;
		}

	}
	//printf("%c",second);
	return first;
	
}

int main(){
	char str[100];
	printf("enter string");
	gets(str);
	int res;
	//second_most(str);
	res = first_most(str);
	if(res!='\0')
	{
		printf("most frequent char is %c",res);
	}
	else
	{
		printf("no char");
	}
	
}
