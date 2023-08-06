/* Print strong number in a given range */

#include<stdio.h>
void main(){
	int num1,num2;
	printf("Enter the range : ");
	scanf("%d%d",&num1,&num2);
		
	for(int i=num1;i<=num2;i++){
	int sum=0,rem=0,flag=0;
	int temp=i;	
	
		
	while(temp!=0){
		rem=temp%10;
		int fact=1;
		for(int j=1;j<=rem;j++){
			fact=fact*j;
			
		}
	sum=sum+fact;
	temp = temp/10;
	}
	if(sum==i){
		printf("%d\t",i);
	}
	}
	printf("\n");

}
