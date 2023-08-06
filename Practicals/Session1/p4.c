//   1  2  3  4
//   5  6  7  8
//   9  10 11 12        take rows and cols from user 

#include<stdio.h>
void main(){
	int rows,cols;
	printf("Enter rows: ");
	scanf("%d",&rows);
	printf("Enter cols: ");
	scanf("%d",&cols);
	int n=1;
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=cols;j++){
			printf("%d\t",n);
			n++;
		}
		printf("\n");
	}
}
