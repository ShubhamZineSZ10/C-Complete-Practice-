/*    1  4  3
 *    16 5  36
 *    7  64 9  */
 
#include<stdio.h>
void main(){
	int rows;
	printf("Enter the no of rows : ");
	scanf("%d",&rows);
	int n=1;
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=rows;j++){
			if((i+j)%2==0){
				printf("%d\t",n);

			}else{
				printf("%d\t",n*n);
			}
			n++;
		}
		printf("\n");
	}
}
