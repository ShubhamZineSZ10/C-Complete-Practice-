/*   a
 *   b a
 *   c b a
 *   d c b a   */

#include<stdio.h>
void main(){
	int rows;
	printf("Enter no of rows : ");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		int n=96+i;
		for(int j=0;j<i;j++){
			printf("%c\t",n);
			n--;
		}
		printf("\n");
	}
}
