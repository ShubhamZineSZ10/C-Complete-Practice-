#include<stdio.h>
void fun(int *ptr1, int *ptr2);

void main(){
	int x=10;
	int y=20;

	printf("X = %d",x);
	printf("Y = %d",y);

	fun(&x,&y);

	printf("X = %d",x);
	printf("Y = %d",y);
}
void fun(int *ptr1,int *ptr2){

	
	printf("X = %d",*ptr1);
	printf("Y = %d",*ptr2);
	
	int temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;

	printf("X = %d",*ptr1);
	printf("Y = %d",*ptr2);
}
