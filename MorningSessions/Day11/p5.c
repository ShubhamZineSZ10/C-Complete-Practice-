/*    1  3  6  10
 *    12 15 19
 *    22 26
 *    30    */


#include<stdio.h>
void main(){
	int rows;
	printf("Enter no of rows : ");
	scanf("%d",&rows);
	int n=1;
	int temp=0;
	for(int i=1;i<=rows;i++){
		int m=i+1;
		for(int j=rows;j>=i;j--){
			printf("%d\t",n);
			n=n+m;
			temp=m;
			m++;
		}
		printf("\n");
		n=n-temp+i+1;
	}
}
