/*     4 3 2 1
 *     5 4 3 2
 *     6 5 4 3 
 *     7 6 5 4        */

#include<stdio.h>
void main(){
	int rows,m=0;
	printf("Enter the no of rows : ");
	scanf("%d",&rows);
	int n=rows;
	for(int i=1;i<=rows;i++){
		
		m=n;
		for(int j=1;j<=rows;j++){
			printf("%d\t",m);
			m--;
		}
		printf("\n");
		n++;
	}
}
