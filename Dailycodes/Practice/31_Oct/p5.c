//WAP to allocate a memory of integer type and then its memory without using the free() function
 
#include<stdio.h>
#include<stdlib.h>
void main(){
	int *ptr=(int*)malloc(sizeof(int));
	printf("Enter the float value: ");
	scanf("%d",ptr);
	printf("%d\n",*ptr);
	int *ptr1=(int*)realloc(ptr,0);
	printf("%d\n",*ptr);
}
