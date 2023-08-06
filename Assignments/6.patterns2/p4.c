/*     I H G
 *     F E D
 *     C B A   */

#include<stdio.h>
void main(){
	int rows;
	printf("Enter no of rows : ");
	scanf("%d",&rows);
	int n=rows*rows;
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=rows;j++){
			printf("%c\t",64+n);
			n--;
		}
		printf("\n");
	}
}
