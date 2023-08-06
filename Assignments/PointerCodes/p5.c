#include<stdio.h>
void main(){
	int x=10;
	int *iptr=&x;
	int *iptr1=iptr;
	int **iptr2=&iptr1;

	printf("%d\n",x);
	printf("%d\n",*iptr);
	printf("%d\n",*iptr1);
	printf("%d\n",**iptr2);

}
