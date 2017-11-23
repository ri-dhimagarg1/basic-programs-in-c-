#include<stdio.h>
int main()
{
	char s[20];
	char n[20];
	int i,j,k=0,l;
	printf("enter string");
	scanf("%s",s);
	//copying first element in new array.
	n[0] = s[0];
	l=1;// indexing for new array without duplicates
	
	for(i=1;i<strlen(s);i++)
	{
		j=(i-1);
		k=j;
		while(k>=0)
		{
			//if array already having that value then break out of loop
			if(s[k]==s[i])
			{
				break;
			}
			//if array dont have that value ,simply insert this element to new arry.
			else if(k==0 && s[k]!=s[i])
			{
				n[l] = s[i];
				l++;
				break;
			}
			else
			{
				k--;
			}
		}
		
	}
	//printing of elements of new array without duplicates
	printf("%s",n);
	
}
