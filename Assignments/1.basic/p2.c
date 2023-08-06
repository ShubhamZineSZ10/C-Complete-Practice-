/* Write a program to print first 100 numbers*/

#include<stdio.h>
void main(){
	int num;
	printf("Enter the number: \n");
	scanf("%d",&num);	
	for(int i=num; i<num+100; i++){
		printf("%d\n",i);
	}
}
