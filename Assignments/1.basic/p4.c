/* Write a program to print even no,s between 1 -100 */

#include<stdio.h>
void main(){

	int num1,num2;
	printf("Enter the range of numbers: ");
	scanf("%d%d",&num1,&num2);
	printf("The even numbers are :\n");
	for(int i = num1; i <= num2; i++ ){
		if(i%2==0){
			printf("%d\n",i);
		}
	
	}

}
