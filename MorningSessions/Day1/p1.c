/*    1
 *    2 4
 *    3 6 9
 *    4 8 12 16         */

#include<stdio.h>
void main(){
	int rows;
	printf("ENter no of rows : ");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		int n=i;
		for(int j=1;j<=i;j++){
			printf("%d\t",n);
			n=n+i;
		}
		printf("\n");
	}
}
