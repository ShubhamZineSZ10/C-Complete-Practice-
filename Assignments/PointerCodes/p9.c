#include<stdio.h>
void fun(int ,int,int);
void main(){
	int x=10;
	int y=20;
	int z=30;

//	fun(x,y);
	fun(x,y,z);
}
void fun(int x=15, int y, int z){

	printf("%d\n",x+y+z);
	
}
