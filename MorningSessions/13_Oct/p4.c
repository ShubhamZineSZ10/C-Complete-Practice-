#include<stdio.h>
void main(){
	int num,rem;
	do{
		printf("Enter no.: ");
		scanf("%d",&num);
		rem=num%10;
		printf("%d\n",num);
	}while(rem!=0);
	printf("Exiting code: You Entered 0\n");
}
