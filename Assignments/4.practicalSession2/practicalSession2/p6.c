/* WAP to take input from user and count the no of digits*/

#include<stdio.h>
void main(){
	int num;
	printf("Enter the no : ");
	scanf("%d",&num);
	int rem=0;
	int count=0;

	while(num>0){
	
		rem=num%10;
		if(rem!=0){
		count++;
		}
		num=num/10;
	
	}
	printf("The no of digits are : %d\n",count);
}
