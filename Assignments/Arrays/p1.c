//WAP to take 1-D array from user and print it

#include<stdio.h>
void main(){
	int num;
	printf("Enter no. of elements in array: ");
	scanf("%d",&num);
	int arr[num];
	printf("Enter elements in array : \n");
	for(int i=0;i<num;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<num;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");

}
