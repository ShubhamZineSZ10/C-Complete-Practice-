/*   1  4  27           
 *   4  27 16          
 *   27 16 125             */


#include<stdio.h>
void main(){
	int rows;
	printf("Enter the no of rows : ");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		int n=i;
		for(int j=0;j<rows;j++){
			if(n%2!=0){
				printf("%d\t",n*n*n);
			}else{
				printf("%d\t",n*n);
			}
			n++;
		}
		printf("\n");
	}
}
