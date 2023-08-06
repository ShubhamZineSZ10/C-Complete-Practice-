//Passing structure to a function
//Way 1 - Passing structure's object

#include<stdio.h>
struct Demo{
	int x;
	float y;
};
void fun(struct Demo obj){
	printf("%d\n",obj.x);
	printf("%f\n",obj.y);
}
void main(){
	struct Demo obj ={10,20.5f};
	fun(obj);
}
