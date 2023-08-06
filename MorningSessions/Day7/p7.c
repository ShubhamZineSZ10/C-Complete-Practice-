/* Print the sum of even digit in a number */

#include<stdio.h>
void main(){
	int num;
	printf("Enter the no. : ");
	scanf("%d",&num);
	int rem=0,sum=0;
	int temp=num;
	while(num>0){
		rem=num%10;
		if(rem%2==0){
			sum=sum+rem;
		}
		num=num/10;
	}
	printf("The sum is : %d\n",sum);
}
