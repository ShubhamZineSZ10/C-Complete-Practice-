#include<stdio.h>
void fun(int,int);

void main(){
	int x=10;
	int y=x+10;

	printf("x= %d\n",x);
	printf("y= %d\n",y);

	fun(x,y);
	printf("x= %d\n",x);
	printf("y= %d\n",y);


}

void fun(int x,int y){
	printf("x= %d\n",x);
	printf("y= %d\n",y);
	
	int temp=x;
	x=y;
	y=temp;
	printf("x= %d\n",x);
	printf("y= %d\n",y);
}
