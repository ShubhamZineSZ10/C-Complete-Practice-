/* WAP to get 10 numbers from user and find its sum and average*/

#include<stdio.h>
void main(){

	int sum=0,num;
	float avg=0;

	for(int i=1;i<=10;i++){
		printf("Enter no : %d\n ",i);
		scanf("%d",&num);
		sum=sum+num;
	
	}
	printf("The sum is : %d\n",sum);
	avg=sum/10;
	printf("Average is : %f\n",avg);

	
}
