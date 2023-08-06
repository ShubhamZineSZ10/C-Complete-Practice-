/* Write a program to print product of first 10 numbers*/

#include<stdio.h>
void main(){
	int num,mul=1;
	printf("Enter the number : ");
	scanf("%d",&num);
	printf("The product is \n");
	for(int i = num; i<= num+9; i++ ){
		mul=mul*i;
		
	}

		printf("%d\n",mul);
	
}
