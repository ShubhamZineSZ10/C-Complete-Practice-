//Code for string reverse
//mystrrev()

#include<stdio.h>

char* mystrrev(char *str){
	char *temp=str;
	while(*temp!='\0'){
		temp++;
	}
	temp--;	
	char x;
	while(str<temp){
		x=*str;
		*str=*temp;
		*temp=x;
		str++;
		temp--;
	}
	return str;
}
void main(){
	char str[10]={'a','j','a','y'};
	//gets(str);
	puts(str);
	mystrrev(str);
	puts(str);
}
