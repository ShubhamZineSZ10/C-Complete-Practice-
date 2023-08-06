/*     1  4  7  10
 *     7  10 13 16
 *     13 16 19 22
 *     19 22 25 28 */

#include<stdio.h>
void main(){
	int rows;
	printf("Enter no of rows : ");
	scanf("%d",&rows);
	int n=1;
	for(int i=0;i<rows;i++){
		for(int j=0;j<rows;j++){
			printf("%d\t",n);
			n=n+3;
		}
		n=n-6;
		printf("\n");
	}
}
