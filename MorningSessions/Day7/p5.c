/* WAP to check if the no is strong no or not */

#include<stdio.h>
void main(){
	int num;
	printf("Enter the no. : ");
	scanf("%d",&num);
	int sum=0,rem=0;
	int temp=num;
	while(num>0){
		rem=num%10;
		int fact=1;
		for(int i=rem;i>=1;i--){
			fact=fact*i;
			
		}
		sum=sum+fact;
		num=num/10;
	
	}
	if(sum==temp){
		printf("%d is a Strong number\n",temp);
	}else{
		printf("%d is not a Strong number\n",temp);
	}

}
