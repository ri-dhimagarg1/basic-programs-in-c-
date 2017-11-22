//program to reverse the each words of string.

#include<stdio.h>
#include<string.h>
int main()
{
	//static input
	char str[] = "my name is mitali garg";
	char st[40];
	int i,j,k,p,l;
	p=0;
	k=0;
	printf("%d",strlen(str));
	for(i=0;i<strlen(str);i++)
	{
		//if space occurs means next word start so to reverese the previous word.
		if(str[i]==' ')
		{
			j= i-1;
			for(l=j;l>=p;l--)
			{
				//storing reversed letters to new string st[]
				st[k] = str[l];
				k++;
			}
			//simply to store space after each word.
			st[k]=' ';
			k++;
			//points the next word as needs to skip space index as well.
			p = j+2;
		}
		//this is to reverse the last word because after last word there will be no space so it will not reverse the last word.
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
	//printing the reverse words of string.
	for(i=0;i<=k;i++)
	{
		printf("%c",st[i]);
	}
}
