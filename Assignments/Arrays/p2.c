//WAP to take 2-D array from user and print it

#include<stdio.h>
void main(){
	int rows,cols;
	printf("Enter no. of rows in array: ");
	scanf("%d",&rows);
	printf("Enter no. of cols in array: ");
	scanf("%d",&cols);
	int arr[rows][cols];
	printf("Enter elements in array : \n");
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	

}
