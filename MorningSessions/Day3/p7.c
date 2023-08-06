/* WAP to print Harshad no. */

#include<stdio.h>
void main(){
	int num;
	printf("Enter the no. : ");
	scanf("%d",&num);
	int sum=0,rem=0;
	int temp=num;
	while(num>0){
		rem=num%10;
		sum=sum+rem;
		num=num/10;

	}
	if(temp%sum==0){
		printf("It is Harshad no. \n");
	}else{
		printf("It is Not a Harshad no. \n");
	}


}
