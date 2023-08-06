//WAP to allocate memory for salary of n friends (using calloc)

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
}
