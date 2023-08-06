#include<stdio.h>
void main(){
	int money;
	printf("Enter the money you have:\n");
	scanf("%d",&money);
	printf("You have %d Rs\n",money);

	if(money>=50 && money<=100){
		printf("Travel through PMT\n");
	}
	if(money>100){
		printf("Travel with Ola/Uber\n");
	}else{
		printf("chal be nikal paidal\n");
	}
}
