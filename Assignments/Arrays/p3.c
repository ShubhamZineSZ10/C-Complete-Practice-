//WAP to take 3-D array from user and print it

#include<stdio.h>
void main(){
	int plane,rows,cols;
	printf("Enter the no of planes in an array : ");
	scanf("%d",&plane);
	printf("Enter no. of rows in array: ");
	scanf("%d",&rows);
	printf("Enter no. of cols in array: ");
	scanf("%d",&cols);
	int arr[plane][rows][cols];
	printf("Enter elements in array : \n");
	for(int k=0;k<plane;k++){
		for(int i=0;i<rows;i++){
			for(int j=0;j<cols;j++){
				scanf("%d",&arr[k][i][j]);
			}
		}
	}
	for(int k=0;k<plane;k++){
		for(int i=0;i<rows;i++){
			for(int j=0;j<cols;j++){
				printf("%d\t",arr[k][i][j]);
			}
		printf("\n");
		}
		printf("\n");
		printf("\n");
	}
	

}
