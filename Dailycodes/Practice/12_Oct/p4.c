//Use of  gets()  and puts() functions

#include<stdio.h>
void main(){
	char name[18];

	printf("Enter Name: ");
	gets(name);                    //used to take input in string

	puts(name);                     //used to print the string
}
// there is no need of format specifiers for these strings

