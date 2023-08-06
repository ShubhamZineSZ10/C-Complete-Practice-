/* WAP to print divisors of all given no.*/

#include<stdio.h>
void main(){
	int num;
	printf("Enter the no. : ");
	scanf("%d",&num);

	for(int i=1;i<=num;i++){
		if(num%i==0){
			printf("%d\t",i);

		}
	
	}printf("\n");
}
