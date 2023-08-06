/*Writr a program to print Ascii values of 0-127*/

#include<stdio.h>
void main(){
	int num1,num2;
	printf("Enter the range : ");
	scanf("%d %d",&num1,&num2);

	for(int i = num1; i <= num2; i++){
		printf("%d = %c \n",i,i);
	}
}
