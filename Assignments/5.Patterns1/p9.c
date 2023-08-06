 /*         2  5  10
  *         17 26 37
  *         50 65 82   */

#include<stdio.h>
void main(){
	int rows,n1=1,sum=1;
	printf("enter no of rows : ");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		for(int j=1;j<=rows;j++){
			sum=sum+n1;
			printf("%d\t",sum);
			n1=n1+2;
		}
		printf("\n");
	}


}
