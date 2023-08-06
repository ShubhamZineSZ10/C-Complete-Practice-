/* WAP to check whether the year is leap year */

#include<stdio.h>
void main(){
	int num;
	printf("Enter the year : ");
	scanf("%d",&num);

	if(num%4==0 || num%400==0){

		printf("It is a leap year\n");
	}else if(num%100==0){
		printf("It is a leap year\n");
		
	
	}else{
		printf("It is not a leap year\n");
	}
}
