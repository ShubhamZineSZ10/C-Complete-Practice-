/* WAP take input from user and print no in reverse order/
 */


#include<stdio.h>
void main(){
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	int rem=0;
	int temp=0;
	while(num>0){
	
		rem=num%10;
		temp=temp*10+rem;
		
		
		num=num/10;

	
	}
	printf("The no is: %d\n",temp);
}
