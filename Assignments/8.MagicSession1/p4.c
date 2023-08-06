/*       *----
 *       -*---
 *       --*--
 *       ---*-
 *       ----*/

#include<stdio.h>
void main(){
	int rows;
	printf("Enter no of rows : ");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++){
		for(int x=1;x<=i;x++){
			printf(" ");
		}
		for(int j=1;j<=rows;j++){
			if(i==j){
				printf("*");
			}
		}
		printf("\n");
	}
}
