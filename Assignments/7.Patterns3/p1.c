/*  1 2 3 4
 *  1 3 5 7
 *  1 4 7 10
 *  1 5 9 13 */

#include<stdio.h>
void main(){
	int rows;
	printf("Enter the no of rows : ");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++){
		int n=1;
		for(int j=1;j<=rows;j++){
			printf("%d\t",n);
			n=n+i;
		}
		printf("\n");
	}
}
