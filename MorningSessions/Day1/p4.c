/*  5 4 3 2 1
 *  D C B A
 *  3 2 1 
 *  B A
 *  1                */

#include<stdio.h>
void main(){
	int rows;
	printf("Enter no of rows : ");
	scanf("%d",&rows);

	for(int i=0;i<rows;i++){
		int n=rows-i;
		for(int j=rows;j>i;j--){
			if(i%2==0){

				printf("%d\t",n);

			}else{
				printf("%c\t",64+n);	
			}
			n--;
		}
		printf("\n");
	}
}
