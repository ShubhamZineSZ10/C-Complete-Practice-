/*   18 16 14
 *   12 10 8
 *   6  4  2        */

#include<stdio.h>
void main(){
	int rows;
	printf("Enter the no of rows: ");
	scanf("%d",&rows);
	int n=rows*rows*2;
	for(int i=1;i<=rows;i++){
		
		for(int j=1;j<=rows;j++){
			printf("%d\t",n);
			n=n-2;
		
		}
		printf("\n");
	
	}
}
