/* WAP a program to take number inputs and print all the factors */

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
