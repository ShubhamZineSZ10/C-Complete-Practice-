/*   2
 *   3 4
 *   4 5 6
 *   5 6 7 8 */

#include<stdio.h>
void main(){
	int rows;
	printf("Enter no of rows : ");
	scanf("%d",&rows);
	
	for(int i=1;i<=rows;i++){
		
		for(int j=0;j<i;j++){
		
			printf("%d\t",i+1+j);
			
		}
		printf("\n");
	}

}
