/*      1  2   9    4
 *      25 6   49   8
 *      81 10  121  12           */

#include<stdio.h>
void main(){
	int rows,n=1;
	printf("Enter the no of rows : ");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		for(int j=1;j<=rows;j++){
			if(j%2==0){
				printf("%d\t",n);
			}else{
				printf("%d\t",n*n);
			}
			n++;
		}
		printf("\n");
	}
}
