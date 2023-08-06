// WAP to find out the size of structure containing pointer and array

#include<stdio.h>

	struct Demo
	{
		int arr[20];
		float y;
		char chl;
		char *ptr;
	};
	
void main(){
	struct Demo obj1;
	printf("%ld\n",sizeof(obj1));             //96
	
	
}
