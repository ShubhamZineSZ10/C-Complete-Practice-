/*   1
 *   1 2
 *   1 2 3
 *   1 2 3 4
 *   1 2 3
 *   1 2
 *   1   */
/*
 
#include<stdio.h>
void main(){
	int rows;
	printf("Enter no of rows : ");
	scanf("%d",&rows);
	int x=rows%2,y=rows/2;
	int mid=x+y;

	for(int i=1;i<=rows;i++){
		for(int j=1;j<=i;j++){
			printf("%d\t",j);
		}		
		printf("\n");
		
	}
	
	for(int i=rows;i>=1;i--){
		for(int j=1;j<i;j++){
			printf("%d\t",j);
		}
		printf("\n");
	}
	
	
}*/

#include<stdio.h>
void main(){
	int rows;
	printf("Enter the no of rows : ");
	scanf("%d",&rows);
	int x=rows%2, y=rows/2;
	int mid=x+y;

	if(mid<=rows){
		for(int i=1;i<=rows;i++){
			for(int j=1;j<=i;j++){
				printf("%d\t",j);

			}
			printf("\n");
		}
	}else{
		for(int i=rows;i>=1;i--){
			for(int j=1;j<=i;j++){
				printf("%d\t",j);
			}
			printf("\n");
		}
	}
}
