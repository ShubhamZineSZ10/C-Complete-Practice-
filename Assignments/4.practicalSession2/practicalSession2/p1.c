/* WAP to find the sum of no that are not divisible by 3 up to given no*/

#include<stdio.h>
void main(){
	int num;
	printf("Enter the no : ");
	scanf("%d",&num);
	int sum=0;
	for(int i= 1;i<=num; i++){
	
		if(i%3!=0){
		
			sum=sum+i;

			
		}
	
	}
	printf("Sum of no not divisible by 3 is: %d\n",sum);
}
