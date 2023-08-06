/*           A B C D
 *             B C D
 *               C D
 *                 D        */

#include<stdio.h>
void main(){
	int rows;
	printf("Enter no of rows : ");
	scanf("%d",&rows);
		
	for(int i=0;i<rows;i++){
		int n=i+1;
		for(int j=1;j<=i;j++){
			printf("\t");
		}
		for(int j=rows;j>i;j--){
			printf("%c\t",64+n);
			n++;
		}
	printf("\n");
	}
	
}
