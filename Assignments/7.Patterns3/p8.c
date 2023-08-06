/*  16  15  14  13
 *  L   K   J   I
 *  8   7   6   5
 *  D   C   B   A    */

#include<stdio.h>
void main(){
	int rows;
	printf("Enter the no of rows : ");
	scanf("%d",&rows);
	int n=rows*rows;
	for(int i=0;i<rows;i++){
		for(int j=0;j<rows;j++){
			if(i%2!=0){
				printf("%c\t",64+n);
			}else{
				printf("%d\t",n);
			}
			n--;
		}
		printf("\n");
	}
}
