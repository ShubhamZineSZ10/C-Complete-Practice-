/*      1  2  3  4
 *      25 36 49 64
 *      9  10 11 12   
 *      */

#include<stdio.h>
void main(){
	int rows;
	printf("Enter the no of rows : ");
	scanf("%d",&rows);
	int n=1;
	for(int i=1;i<=rows;i++){
		
		for(int j=1;j<=rows;j++){
			if(i%2==0){
				printf("%d\t",n*n);
				
			}else{
				printf("%d\t",n);
				
			}
			n++;
		}
		printf("\n");
	}
}
