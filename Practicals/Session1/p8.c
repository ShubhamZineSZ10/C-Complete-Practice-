//  9 8 7
//  6 5 4 
//  3 2 1    rows=3

#include<stdio.h>
void main(){
	int rows;
	printf("Enter rows: ");
	scanf("%d",&rows);
	int n=rows*rows;
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=rows;j++){
			printf("%d\t",n);
			n--;
		}
		printf("\n");
	}
}
