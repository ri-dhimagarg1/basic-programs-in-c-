#include<stdio.h>
#include<string.h>
int main()
{
	char str[20] = "hello";
	int len,i;
	len = strlen(str);
	printf("%d",len);
	for(i=(len-1);i>=0;i--)
	{
		printf("%c",str[i]);
	}
}
