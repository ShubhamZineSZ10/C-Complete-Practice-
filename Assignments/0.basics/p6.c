#include<stdio.h>
void main(){
	int num;
	printf("Enter the no. : ");
	scanf("%d",&num);

	if(num%2==0){
		printf("%d is a even no.\n",num);
	}else{
		printf("%d is a odd no.\n",num);
	}
}
