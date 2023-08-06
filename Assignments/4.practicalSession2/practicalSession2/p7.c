/* WAP to take input no from user and print the sum of digits*/

#include<stdio.h>
void main(){
	int num;
	printf("Enter the no : ");
	scanf("%d",&num);
	int rem=0,sum=0;
	if(num<0){
	num=num*(-1);
	}	

	for(int i=1;i<=num;i++){
	
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("The sum of digits is : %d\n",sum);
	
}
