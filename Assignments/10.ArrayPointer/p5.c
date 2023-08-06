//WAP that accepts 2 strings from user &concat the strings and print the concated string use mystrcat()

#include<stdio.h>
void mystrcat(char *dest,const char *src){
	while(*dest!='\0'){
		dest++;
		
	}
	while(*src!='\0'){
		*dest=*src;
		src++;
		dest++;
	}
	*dest='\0';
	
}
void main(){
	char str1[30];
	char str2[20];
	printf("Enter string 1: ");
	gets(str1);
	printf("Enter string 2: ");
	gets(str2);

	mystrcat(str1,str2);
	puts(str1);
}
