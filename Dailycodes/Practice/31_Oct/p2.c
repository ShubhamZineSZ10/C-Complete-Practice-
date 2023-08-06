//WAP to show the use of Dangling pointer in malloc 

#include<stdio.h>
#include<stdlib.h>
void main(){
	int *ptr1 = (int*)malloc(sizeof(int));
	printf("Enter any value: ");
	scanf("%d",ptr1);
	int *ptr2 = ptr1;
	printf("%d\n",*ptr1);
	printf("%d\n",*ptr2);
	free(ptr1);
	printf("%d\n",*ptr1);
	printf("%d\n",*ptr2);
	printf("%p\n",ptr1);
	printf("%p\n",ptr2);             // in this ptr2 becomes dangling pointer

}
