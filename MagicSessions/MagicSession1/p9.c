/*            1
 *          1 2
 *        1 2 3
 *      1 2 3 4  */

#include<stdio.h>
void main(){
	int rows;
	printf("Enter the no of rows : ");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		int n=1;
		for(int j=1;j<=rows-i;j++){
			printf("-\t");
		}
		for(int k=1;k<=i;k++){
			printf("%d\t",n);
			n++;
		}
		printf("\n");
	}
}
