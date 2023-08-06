/* WAP to check whetehr the no is prime or not*/

#include<stdio.h>
void main(){
	int num;
	printf("Enter the no to check : ");
	scanf("%d",&num);

	int count=0;

	for(int i=2;i<=num;i++){
		if(num%i==0){
		count++;
		}
	}
	if(count==1){
		printf("It is a prime no\n");
	}else{
		printf("It is not a prime no\n");
	}
}
