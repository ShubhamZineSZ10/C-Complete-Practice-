//WAP to allocate memory for salary of n friends (using calloc) and increase the no. of friends

#include<stdio.h>
#include<stdlib.h>
void main(){
	int n;
	printf("Enter no of friends: ");
	scanf("%d",&n);
	float *ptr=(float*)calloc(n,sizeof(float));
	printf("Enter the salaries: \n");
	for(int i=0;i<n;i++){
		scanf("%f",(ptr+i));
	}
	printf("The salaries are: ");
	for(int i=0;i<n;i++){
		printf("%f\t",*(ptr+i));
	}
	printf("\n");
	printf("%p\n",(ptr+1));

	int m;
	printf("Enter the no. of friends increased: ");
	scanf("%d",&m);
	float *ptr1=(float*)realloc(ptr,m);

	for(int i=0;i<m;i++){
		scanf("%f",(ptr+i));
	}
	printf("The salaries are: ");
	for(int i=0;i<m;i++){
		printf("%f\t",*(ptr+i));
	}
	printf("\n");
	printf("%p\n",(ptr+1));

}
