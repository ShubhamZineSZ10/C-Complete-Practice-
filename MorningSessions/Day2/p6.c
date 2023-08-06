/*  WAP to find given no is composite or not */

#include<stdio.h>
void main(){

	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	for(int i=2;i<num;i++){
		if(num%i==0){
			printf("It is a composite no\n");
			break;
		}else{
			printf("It is not a composite no\n");
			break;
		}
	}
}
