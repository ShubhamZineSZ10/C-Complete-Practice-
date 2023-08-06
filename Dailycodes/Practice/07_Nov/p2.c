//Passing Structure to a function
//Way 2- Passing structure's address

#include<stdio.h>
struct Demo{
	int x;
	float y;
};
void fun(struct Demo *ptr){
	printf("%d\n",ptr->x);
	printf("%f\n",(*ptr).y);
}
void main(){
	struct Demo obj={10,20.5f};
	fun(&obj);
}
