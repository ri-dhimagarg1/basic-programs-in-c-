#include<stdio.h>
#include<string.h>
int main()
{
	char str[] = "my name is mitali garg";
	char st[40];
	int i,j,k,p,l;
	p=0;
	k=0;
	printf("%d",strlen(str));
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]==' ')
		{
			j= i-1;
			for(l=j;l>=p;l--)
			{
				st[k] = str[l];
				k++;
			}
			st[k]=' ';
			k++;
			p = j+2;
		}
		else if(i==(strlen(str)-1))
		{
			j= i;
			for(l=j;l>=p;l--)
			{
				st[k] = str[l];
				k++;
			}
			st[k] =' ';
		}
	}
	for(i=0;i<=k;i++)
	{
		printf("%c",st[i]);
	}
}
