/*   A B C D
 *   B C D E
 *   C D E F
 *   D E F G  */

#include<stdio.h>
void main(){
	
	int rows;
	printf("Enter no of rows : ");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		int ch= 64+i;
		for(int j=1;j<=rows;j++){
			printf("%c\t",ch);
			ch++;
		}
		printf("\n");
	}



}
