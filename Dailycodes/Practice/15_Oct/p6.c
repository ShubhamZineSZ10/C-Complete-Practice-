//Array of Character pointers
#include<stdio.h>
#include<string.h>
void main(){
	char *arr[3]={"Shubham","Vishal","Shubham"};
	printf("%p\n",arr[0]);
	printf("%p\n",arr[1]);
	printf("%p\n",arr[2]);
	puts(arr[0]);
	puts(arr[1]);
	puts(arr[2]);
	puts(strcpy(arr[2],"Ajay"));
}
//thesemstring can only be accessed but cannot be changed
