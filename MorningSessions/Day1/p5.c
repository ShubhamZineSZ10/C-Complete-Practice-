/*  4 4 4 4
 *  C C C
 *  2 2
 *  A            */

#include<stdio.h>
void main(){
	int rows;
	printf("Enter no of rows : ");
	scanf("%d",&rows);

	for(int i=0;i<rows;i++){
		for(int j=rows;j>i;j--){
			if(i%2==0){
				printf("%d\t",rows-i);

			}else{
				printf("%c\t",64+rows-i);
			}
		}
		printf("\n");
	}
}
