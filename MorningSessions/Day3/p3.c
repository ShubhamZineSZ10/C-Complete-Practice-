/*  a
 *  b B
 *  c C c
 *  d D d D */

#include<stdio.h>
void main(){
       	int rows; 
	printf("Enter the no of rows: ");
	scanf("%d",&rows);
       	for(int i=1;i<=rows;i++){
	       	for(int j=1;j<=i;j++){
		       	if(j%2==0){
				printf("%c\t",64+i);
			}else{
				printf("%c\t",96+i);
			}
		}
	printf("\n");	
	}
}
