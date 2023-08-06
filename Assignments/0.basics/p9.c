#include<stdio.h>
void main(){
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	if(num<0){
		printf("It is a negative no.\n");
	}else if(num>0){
		printf("It is a positive no.\n");
	}else {
		printf("It is 0\n");
	}
}
