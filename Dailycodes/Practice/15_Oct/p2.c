// mystrupr()      -to convert string to upper case
#include<stdio.h>
char* mystrupr(char* str){
	while(*str!='\0'){
		if(*str>='a' && *str<='z'){
			*str=*str-32;
			
		}
		str++;

	}
	return str;
}
void main(){
	char str[10]={'S','H','u','B','h','A','m','\0'};
	puts(str);
	mystrupr(str);
	puts(str);
}
