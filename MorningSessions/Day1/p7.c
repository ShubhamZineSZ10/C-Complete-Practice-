/*  WAP to print whether the given no is prime of not */

#include<stdio.h>
void main(){
	int num,flag=0;
	printf("Enter num : ");
	scanf("%d",&num);
	for(int i=2;i<num;i++){
		if(num%i==0){
			flag=1;
		}
	}
	if(flag==0){
		printf("It is a prime no \n");
	}else{
	
		printf("It is not a prime \n");	
	}
}
