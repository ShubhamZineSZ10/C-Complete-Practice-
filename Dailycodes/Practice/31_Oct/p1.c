//WAP to allocate a memory of float type, take value from the user and print it 

#include<stdio.h>
#include<stdlib.h>
void main(){
	float *ptr=(float*)malloc(sizeof(float));
	printf("Enter the float value: ");
	scanf("%f",ptr);
	printf("%f\n",*ptr);
	free(ptr);
}
