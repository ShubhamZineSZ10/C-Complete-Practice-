/*      1   3   5
 *      7   9   11
 *      13  15  17        */

#include<stdio.h>
void main(){
	int rows,n=1;
	printf("Enter the no of rows : ");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		for(int j=1;j<=rows;j++){
			
			printf("%d\t",n);
			n=n+2;
		}
		printf("\n");
	}
}
