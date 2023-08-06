// strcat()
/*
#include<stdio.h>
#include<string.h>
void main(){
	char str1[20]={'s','h','u','b','h','a','m','\0'};
	char *str2="Zine";

	printf("%s\n",str1);
	printf("%s\n",str2);

	strcat(str1,str2);

	printf("%s\n",str1);
	printf("%s\n",str2);
}
*/
//mystrcat()
#include<stdio.h>
char* mystrcat(char *str1,char *str2){
	while(*str1!=0){
		str1++;
	}
	while(*str2!=0){
		*str1=*str2;
		str1++;
		str2++;
	}
	*str1='\0';
	return str1;

}
void main(){
	char str1[20]={'S','h','u','b','h','a','m','\0'};
	char *str2="Zine";
	puts(str1);
	puts(str2);
	mystrcat(str1,str2);
	puts(str1);
	puts(str2);
}

