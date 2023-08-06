/* Write a program to print reverse from 1-100*/

#include<stdio.h>
void main(){
	int num1,num2;
	printf("Enter the range of numbers : ");
	scanf("%d %d",&num1,&num2);

	for(int i = num2; i >= num1; i--){
		printf("%d\n",i);
	}
}
