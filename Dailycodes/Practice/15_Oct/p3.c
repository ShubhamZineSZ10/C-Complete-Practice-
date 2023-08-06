//mystrncpy - to copy string till specific count
#include<stdio.h>
char* mystrncpy(char* str1,char* str2,int num){
	while(*str2!='\0'&& num!=0){
		*str1=*str2;
		str1++;
		str2++;
		num--;
	}
	*str1='\0';
	return str1;
}

void main(){
	char *str1="Shubham";
	char str2[10];
	puts(str1);
	puts(str2);
	mystrncpy(str2,str1,5);
	puts(str1);
	puts(str2);
}
