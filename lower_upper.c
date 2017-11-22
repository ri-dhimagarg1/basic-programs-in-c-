//This program converts the lower case letters to uppercase.

#include<stdio.h>


#include<string.h>


int main(){


    char str[100],str1[100],str2[100];


    printf("Enter any string:");


    scanf("%s",str);


    int i;


    printf("Converting to upper case\n");


    for(i=0;i<=strlen(str);i++){ 
		
		//this is checking if letter is in lowercase or not.
		//Ascii value of a-z is 97 to 122
		if(str[i]>=97&&str[i]<=122){


              str1[i] = str[i]-32;                      


         }   


         else{


              str1[i] = str[i];


         }


    }


    printf("%c",str1);
}
