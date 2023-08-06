/*          *
 *          * * 
 *          * * *
 *          * * 
 *          * 
 *          *
 *          * *
 *          * * *
 *          * *
 *          *              */

#include<stdio.h>
void main(){
	int rows;
	printf("Enter no of rows : ");
	scanf("%d",&rows);
	int x=rows%2,y=rows/2;
	int mid=x+y;
	int a=mid%2,b=mid/2;
	int m=a+b;

	for(int i=1;i<=rows;i++){
		if(i<=mid){
			if(i<=m){
				for(int j=1;j<=i;j++){
					printf("  *  ");
				}
				
			}else{
				for(int j=mid-i+1;j>=1;j--){
					printf("  *  ");
				}
				
			}
		}else{
			
			if(i<=mid+m){
				for(int j=1;j<=i-mid;j++){
					printf("  *  ");
				}
				
			}else{
				for(int j=(2*mid)-i+1;j>=1;j--){
					printf("  *  ");
				}
				
			}
		}
			
			
		
		printf("\n");
	}
}
			
