//   A A A
//   B B B
//   C C C         ROES=3
#include<stdio.h>
void main(){
	int rows;
	printf("Enter rows: ");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=rows;j++){
			printf("%c\t",64+i);
		}
		printf("\n");
	}
}
