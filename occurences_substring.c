#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],s[100];
	int i,j,found,c=0;
	int stlen,searchlen;
	printf("enter string");
	gets(str);
	printf("enter substring");
	gets(s);
	stlen = strlen(str);
	searchlen = strlen(s);
	for(i=0;i<=(stlen - searchlen);i++)
	{
		found =1;
		for(j=0;j<searchlen;j++)
		{
			if(str[i+j]!= s[j])
			{
				found =0;
				break;
			}
		}
		if(found ==1)
		{
			c++;
		}
	}
	printf("%d",c);
}
