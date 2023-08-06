/* Write a program to print sum of first 10 odd no.*/

#include<stdio.h>
void main(){
	int num1,sum=0;
	printf("Enter the number  : ");
	scanf("%d",&num1);
	
		for(int i = num1; i <= num1+19; i++ ){
			if(i%2==1){
				sum=sum+i;
				printf("%d\n",i);
			}

	}
	printf("The sum is : %d\n",sum);
}
