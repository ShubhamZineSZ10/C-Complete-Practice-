/* WAP to print divisors and count od divisors of the entered num*/

#include<stdio.h>
void main(){
	int num;
	printf("Enter the input : ");
	scanf("%d",&num);
	int count=0,sum=0;

	
	printf("The divisors are: ");
	
	for(int i=1;i<=num;i++){
		
		if(num%i==0){
			printf("%d\t",i);
			count++;
			sum=sum+i;
		
		}

	
	}
	printf("\n");
	printf("The count of divisors is : %d\n",count);
	printf("The addition of divisors is: %d\n",sum);

}
