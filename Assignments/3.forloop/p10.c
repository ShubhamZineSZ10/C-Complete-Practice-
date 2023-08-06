/* WAP to print no in given range and there multiplicative inverse*/

#include<stdio.h>
void main(){
	int num1,num2;
	printf("Enter the no. : ");
	scanf("%d %d",&num1,&num2);
	float num=0;

	for(float i=num1;i<=num2;i++){

		num=1/i;
		printf("%f = %f\n",i,num);
	
	}
}
