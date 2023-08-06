/* Write a program to print table of 11 in reverse order*/

#include<stdio.h>
void main(){
	int num,mul=0;
	printf("Enter the number whose table is to be printed : ");
	scanf("%d",&num);
	printf("Table of %d is \n",num);
		for(int i = 10; i >= 1; i-- ){
		mul=num*i;
		printf("%d\n",mul);
	}

}
