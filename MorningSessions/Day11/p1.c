/*                    10
 *                I   H
 *             7  8   9
 *          D  C  B   A */

#include<stdio.h>
void main(){
	int rows;
	printf("Enter no of rows : ");
	scanf("%d",&rows);
	int n= (2*rows)+2;

	for(int i=1;i<=rows;i++){
		for(int j=1;j<=rows-i;j++){
			printf("\t");
		}
		for(int j=1;j<=i;j++){
			if(i%2==0){
				printf("%c\t",64+n);
				n--;
			}else{
				printf("%d\t",n);
				n--;
			}
		}
		printf("\n");
	}
}
