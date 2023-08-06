// strcpy()         - used to copy string
/*
#include<stdio.h>
#include<string.h>
void main(){
	char *str1="shubham";
	char str2[20];

	puts(str1);
	puts(str2);
	strcpy(str2,str1);
	puts(str1);
	puts(str2);
}*/


// mystrcpy()

#include<stdio.h>
char* mystrcpy(char *str1,char*str2){
	while(*str2!='\0'){
		*str1=*str2;
		str2++;
		str1++;
	}
	*str1='\0';
	


}
void main(){
	
	char *str1="shubham";
	char str2[20];

	puts(str1);
	puts(str2);
	mystrcpy(str2,str1);
	puts(str1);
	puts(str2);
}
