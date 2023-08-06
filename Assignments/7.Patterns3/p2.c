/*  3 b 1 d
 *  a 2 c 0
 *  3 b 1 d
 *  a 2 c 0     */

#include<stdio.h>
void main(){
	int rows;
	printf("Enter the no of rows : ");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=rows;j++){
			if((i+j) %2==0){
				printf("%d\t",rows-j);
			}else{
				printf("%c\t",64+j);
			}
		}
		printf("\n");
	}
}
