// Array of Strings 

#include<stdio.h>
#include<string.h>
void main(){
	char arr[3][10]={"Shubham","Vaibhav","Ajay"};
	char arr1[][10]={{'S','h','u','b','h','a','m','\0'},{'V','i','s','h','a','l','\0'}};

	printf("%p\n",arr);               //100
	printf("%p\n",&arr);              //100
	printf("%p\n",arr[0]);            //100
	printf("%p\n",&arr[0]);           //100 
	printf("%c\n",arr[0][0]);         //100
	printf("%p\n",&arr[0][0]);        //100
	puts(arr[0]);
	puts(&arr[0][0]);
	puts(arr[1]);
	puts(arr[2]);
	puts(&arr[0]);
	puts(strcpy(arr[2],"Zine"));
}
