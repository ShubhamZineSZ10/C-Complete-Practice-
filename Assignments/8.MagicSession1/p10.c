/*       D D D D
 *         C C C
 *           B B
 *             A          */ 

#include<stdio.h>
void main(){
	int rows;
	printf("Enter the no. : ");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		for(int j=2;j<=i;j++){
			printf("-\t");
		}
		for(int k=rows;k>=i;k--){
			printf("%c\t",65+rows-i);
		}
		printf("\n");
	}
}
