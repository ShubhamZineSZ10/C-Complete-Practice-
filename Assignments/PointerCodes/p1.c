#include<stdio.h>
void main(){
	int x=10;
	char ch='A';
	float f=52.5;
	double d=30.25;

	int *ptr1 = & x;
	char *ptr2=&ch;
	float *ptr3=&f;
	double *ptr4=&d;

	printf("%p\n",ptr1);    //101
	printf("%p\n",ptr2);    //100
	printf("%p\n",ptr3);    //105
	printf("%p\n",ptr4);    //109

	printf("%d\n",*ptr1);   //10
	printf("%c\n",*ptr2);   //'A'
	printf("%f\n",*ptr3);   //52.50
	printf("%lf\n",*ptr4);   //30.25
}
