/*   a
 *   A B
 *   a b c
 *   A B C D  */

#include<stdio.h>
void main(){
	int rows;
	printf("Enter the no of rows: ");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=i;j++){
		
			if(i%2!=0){
				printf("%c\t",96+j);

			}else{
				printf("%c\t",64+j);
			}			
		}
		printf("\n");
	}
}
