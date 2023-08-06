/* WAP take input from user and print product of digits/
 */


#include<stdio.h>
void main(){
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	int rem=0,prod=1;

	for(int i=1;i<=num;i++){
	
		rem=num%10;
		prod=prod*rem;
		num=num/10;

	
	}
	printf("Tne product of digit is : %d\n",prod);
}
