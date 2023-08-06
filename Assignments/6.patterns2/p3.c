/*    4 4 4 4
 *    3 3 3 3
 *    2 2 2 2
 *    1 1 1 1    */

#include<stdio.h>
void main(){
	int rows;
	printf("Enter the no of rows : ");
	scanf("%d",&rows);

	for(int i=0;i<rows;i++){
		for(int j=1;j<=rows;j++){
			printf("%d\t",rows-i);

		}
		printf("\n");
	}
}
