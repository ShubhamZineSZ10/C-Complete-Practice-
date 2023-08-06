/* WAP to print factorial of the given no */

#include<stdio.h>
void main(){
	int num;
	printf("Enter the : ");
	scanf("%d",&num);
	int fact=1;
	for(int i=num;i>=1;i--){
		
		fact=fact*i;

	}
	printf("Factorial of %d is : %d\n",num,fact);
}
