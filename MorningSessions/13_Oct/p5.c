#include<stdio.h>
void main(){
	int num;

	printf("Enter no.: ");
	scanf("%d",&num);
	if(num%7==0){

	
		printf("%d\n",num);
		break ;
	}else{
		do{
			printf("Enter no.: ");
			scanf("%d",&num);
			printf("%d\n",num);
		}while(num%7!=0);
	}
	printf("Exiting code: You entered no divisible by 7\n");
}
