/*   17  15  13
 *   11   9   7
 *    5   3   1           */

#include<stdio.h>
void main(){
	int rows;
	printf("Enter no of rows : ");
	scanf("%d",&rows);
	int k=((rows*rows)*2)-1;
	for(int i=0;i<rows;i++){
		for(int j=0;j<rows;j++){
	
			printf("%d\t",k);
			k=k-2;
		}
		printf("\n");
	}
}
