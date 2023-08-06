/*  1
 *  1 2
 *  2 3 4
 *  4 5 6 7
 *  7 8 9 10  */

#include<stdio.h>
void main(){
	int rows;
	printf("Enter no of rows : ");
	scanf("%d",&rows);
	int num=1;
	for(int i=1;i<=rows;i++){
		
		for(int j=1;j<=i;j++){
			printf("%d\t",num);
			num++;
		}
		num--;
		printf("\n");
	}

}
