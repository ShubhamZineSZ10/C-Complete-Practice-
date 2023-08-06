//mystrncat  -used to concat string till a count
#include<stdio.h>
char* mystrncat(char* str1,char* str2, int num){
	
	while(*str1!='\0'){
		str1++;
	}
	while(*str2!='\0' && num!=0){
		*str1=*str2;
		str1++;
		str2++;
		num--;
	}
	return str1;
}
void main(){
	char str[20]={'S','h','u','b','h','a','m','\0'};
	char *str1="Vishal";
	puts(str);
	puts(str1);

	mystrncat(str,str1,4);
	puts(str);
	puts(str1);
}
