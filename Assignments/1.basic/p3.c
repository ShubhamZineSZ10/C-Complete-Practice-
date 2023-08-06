/* Write a program to print first 10 three digit number*/

#include<stdio.h>
void main(){
	int num;
	printf("Enter the number of digits to print : ");
	scanf("%d",&num);

	for(int i = 100; i <= 99+num; i++){
		printf("%d\n",i);
	}

}
