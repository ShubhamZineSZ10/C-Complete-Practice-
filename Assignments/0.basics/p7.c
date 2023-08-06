#include<stdio.h>
void main(){
	int num;
	printf("Enter the no to check : ");
	scanf("%d",&num);
	if(num>10){
		printf("%d is Greater than 10\n",num);
	}else if(num<10){
		printf("%d is Smaller than 10\n",num);
	}else{
		printf("Equal to 10\n");
	}
}
