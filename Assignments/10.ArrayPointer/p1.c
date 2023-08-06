//WAP that accepts string from user and prints the length of the string. Use mystrlen()

#include<stdio.h>

int mystrlen(char *str){
	int cnt =0;
	while(*str!='\0'){
		str++;
		cnt++;
	}
	return cnt;
}
void main(){
	char str[100];
	printf("Enter the string: ");
	gets(str);

	printf("The length of string is %d\n",mystrlen(str));
}
