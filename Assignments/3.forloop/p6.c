/* WAp to calculate factorial of given no */

#include<stdio.h>
void main(){
	int num,fact=1;
	printf("Enter the no : ");
	scanf("%d",&num);

	for(int i=num;i>=1;i--){
		fact=fact*i;
	}
	printf("The factorial of %d is : %d\n",num,fact);
}
