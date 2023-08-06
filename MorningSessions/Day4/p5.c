/*  WAP to print Fibonacci series up to given range take only end from user*/

#include<stdio.h>
void main(){
	int num;
	printf("Enter the no : ");
	scanf("%d",&num);
	int first=0,second=1,next=0;
	for(int i=1;i<=num;i++){
			if(first<=num){
			printf("%d\t",first);
			next= first + second;
			first = second;
			second = next;
		}
	}
	printf("\n");
}
