/* WAP to take the no as input and check whether it is prime or not*/

#include<stdio.h>
void main(){
	int num,flag=0;
	printf("Enter the no. to check : ");
	scanf("%d",&num);
	if(num>1){
	for(int i=2;i<=num;i++){
		if(num%i==0){
		
		flag++;
		}
	
	}
	if(flag==1){
	
		printf("%d is a prime no\n",num);
	}else{
		printf("Not a prime\n");

	}

	}else{
		printf("Invalid Input- (Enter the value greater than 2)\n");
	
	}
}
