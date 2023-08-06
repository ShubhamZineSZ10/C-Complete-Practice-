//Union 
//both are given memory in different ways

#include<stdio.h>
struct Demo{
	int x;
	float y;
	double z;
}obj1;

union Demo2{
	int x;
	float y;
	double z;
}obj2;
void main(){
	printf("%ld\n",sizeof(obj1));       //16
	printf("%ld\n",sizeof(obj2));       //8
}
