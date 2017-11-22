#include<stdio.h>
int main()
{
	char s[20] ,t[20] ;
	int i,count ,s1[20] ,s2[20] , key,j;
	printf("enter string1");
	gets(s);
	printf("enter string2");
	gets(t);
	
	for(i=0;i<strlen(s);i++)
	{
		s1[i] = (int) s[i];
	}
	for(i=0;i<strlen(t);i++)
	{
		s2[i] = (int) t[i];
	}
	for(i=0;i<strlen(s);i++)
	{
		printf("%d",s1[i]);
	}
	printf("\n");
	for(i=0;i<strlen(t);i++)
	{
		printf("%d",s2[i]);
	}
	printf("\n");
	for(i=0;i<strlen(s);i++)
	{
		for(j=0;j<strlen(s);j++)
		{
			if(s1[j]>s1[j+1])
			{
				key = s1[j];
				s1[j]= s1[j+1];
				s1[j+1] = key;
				
			}
					printf("%d",s1[j]);
				
		}
		printf("\n");
	}
	for(i=0;i<strlen(t);i++)
	{
		for(j=0;j<strlen(t);j++)
		{
			if(s2[j]>s2[j+1])
			{
				key = s2[j];
				s2[j]= s2[j+1];
				s2[j+1] = key;
				
			}
		}
	}
		for(i=0;i<strlen(s);i++)
	{
		printf("%d",s1[i]);
	}
	printf("\n");
			for(i=0;i<strlen(s);i++)
	{
		printf("%d",s2[i]);
	}
	printf("\n");
	for(i=0;i<strlen(s);i++)
	{
		if(s1[i]!=s2[i])
		{
			printf("not anagrams");
			exit(0);
		}
	}
	printf("Anagrams");
	
	

	
}
