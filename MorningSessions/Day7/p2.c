/*                  D
 *                D c
 *              D c B
 *            D c B a            */

#include<stdio.h>
void main(){
	int rows;
	printf("Enter the no of rows: ");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		int n=rows;
		for(int j=rows;j>i;j--){
			printf("\t");
		}
		for(int j=1;j<=i;j++){
			if(j%2!=0){
				printf("%c\t",64+n);
				n--;
			}else{
				printf("%c\t",96+n);
				n--;
			}
		}
		printf("\n");
	}
}
