//     1 1 1
//     2 2 2
//     3 3 3            row=3

#include<stdio.h>
void main(){
	int rows;
	printf("Enter rows: ");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=rows;j++){
			printf("%d\t",i);
		}
		printf("\n");
	}
}
