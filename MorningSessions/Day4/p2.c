/*  4  9  14  19
 *  8  14 20  26
 *  12 19 26  33
 *  16 24 32  40*/

#include<stdio.h>
void main(){
	int rows;
	printf("Enter no of rows : ");
	scanf("%d",&rows);
	
	for(int i=1;i<=rows;i++){
		int n=rows*i;
		for(int j=0;j<rows;j++){
			printf("%d\t",n);
			n=n+rows+i;
		}
	printf("\n");	
	}
}
