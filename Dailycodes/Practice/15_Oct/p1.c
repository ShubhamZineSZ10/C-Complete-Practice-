// mystrlwr()      -to convert string to lower case
#include<stdio.h>
char* mystrlwr(char* str){
	while(*str!='\0'){
		if(*str>='A' && *str<='Z'){
			*str=*str+32;
			
		}
		str++;

	}
	return str;
}
void main(){
	char str[10]={'S','H','u','B','h','A','m','\0'};
	puts(str);
	mystrlwr(str);
	puts(str);
}
