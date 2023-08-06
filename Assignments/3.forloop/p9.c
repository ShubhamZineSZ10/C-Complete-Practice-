/* WAP to calculate the square root of no ranging from 100 to 300*/

#include<stdio.h>
void main(){
	int num1,num2;
	printf("Enter the number : ");
	scanf("%d %d",&num1,&num2);
	for(int i=num1;i<=num2;i++){
		for(int j=1;j<=100;){
			if(j*j==i){
			printf("%d\n",j);
			}
		}
	
		
	}

}
