//    1  3  5 
//    7  9  11 
//    13 15 17   rows=3
#include<stdio.h>
void main(){
	int rows;
	printf("Enter rows: ");
	scanf("%d",&rows);
	int n=1;
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=rows;j++){
			printf("%d\t",n);
			n++;
			n++;
		}
		printf("\n");
	}
}
