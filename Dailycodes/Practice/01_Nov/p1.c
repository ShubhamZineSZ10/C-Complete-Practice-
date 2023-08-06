// WAP to find out the size of structure

#include<stdio.h>

	struct Demo1
	{
		int x;
		float y;
		char chl;
		double d;
	};
	struct Demo2
	{
		int x;
		float y;
		char ch;
		double d;
		char chl;
		

	};

void main(){
	struct Demo1 obj1;              //object of structure Demo1
	struct Demo2 obj2;              //object of structure Demo2
	printf("%ld\n",sizeof(obj1));             //24
	printf("%ld\n",sizeof(obj2));             //32
	
}
