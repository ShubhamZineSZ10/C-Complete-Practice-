/* 	D4 C3 B2 A1
/* 	D4 C3 B2 A1
/* 	D4 C3 B2 A1
/* 	D4 C3 B2 A1           */

#include<stdio.h>
void main(){

	int rows;
	printf("Enter the no of rows : ");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		int n=rows;
		for(int j=1;j<=rows;j++){
			printf("%c%d\t",64+n,n);
			n--;
		}
		printf("\n");		
	}
}
