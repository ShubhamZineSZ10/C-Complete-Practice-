/*    E D C B A
 *    E D C B
 *    E D C
 *    E D
 *    E           */

#include<stdio.h>
void main(){
	int rows;
	printf("Enter the no of rows : ");
	scanf("%d",&rows);
	int temp=0;
	for(int i =1;i<=rows;i++){
		temp=rows;
		for(int j=rows-i+1;j>=1;j--){
			
			printf("%c",64+temp);
			temp--;
		}
		printf("\n");
		
	}
}
