//  * * *
//  * * * 
//  * * *       rows=3
#include<stdio.h>
void main(){
	int rows;
	printf("Enter rows: ");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=rows;j++){
			printf("*\t");
		}
		printf("\n");
	}
}
