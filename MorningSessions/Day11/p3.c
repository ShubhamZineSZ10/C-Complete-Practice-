/*                    1
 *                 2  3
 *              4  5  6
 *           7  8  9  10
 *              11 12 13    
 *                 14 15
 *                    16  */

#include<stdio.h>
void main(){
	int rows;
	printf("Enter no of rows : ");
	scanf("%d",&rows);
	int x=rows%2,y=rows/2;
	int mid=x+y;
	int n=1;

	for(int i=1;i<=rows;i++){
		if(i<=mid){
			for(int j=mid-i;j>=1;j--){
				printf("\t");
			}
			for(int j=1;j<=i;j++){
				printf("%d\t",n);
				n++;
			}
		}else{
			for(int j=1;j<=i-mid;j++){
				printf("\t");
			}
			for(int j=rows-i+1;j>=1;j--){
				printf("%d\t",n);
				n++;
			}
		}
		printf("\n");
	}
}
