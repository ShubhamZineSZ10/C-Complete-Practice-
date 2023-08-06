/*    3
 *    2 3
 *    1 2 3
 *    0 1 2 3
 *    1 2 3
 *    2 3
 *    3              */

#include<stdio.h>
void main(){

	int rows;
	printf("Enter no of rows : ");
	scanf("%d",&rows);
	int x=rows%2, y=rows/2;
	int mid=x+y;

	for(int i=1;i<=rows;i++){
		if(i<=mid){
			int n=mid-i;
			for(int j=1;j<=i;j++){
				printf("%d\t",n);
				n++;
			}
		}else{
			int m=i-mid;
			for(int j=rows-i+1;j>=1;j--){
				printf("%d\t",m);
				m++;
			}
		}
		printf("\n");
	}
}
