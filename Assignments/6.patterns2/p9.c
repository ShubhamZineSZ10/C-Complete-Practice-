/*      1  3  8
 *      15 24 35
 *      48 63 80  
 *      */

#include<stdio.h>
void main(){
	int rows;
	printf("Enter the no of rows : ");
	scanf("%d",&rows);
	int n=1;
	for(int i=1;i<=rows;i++){
		
		for(int j=1;j<=rows;j++){
			if(n==1){
				printf("1\t");
			
			}else{
				printf("%d\t",n*n-1);
			}
			n++;
		}
		printf("\n");
	}
}
