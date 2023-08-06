/*   D4 C3 B2 A1
 *   A1 B2 C3 D4
 *   D4 C3 B2 A1
 *   A1 B2 C3 D4       */


#include<stdio.h>
void main(){
	int rows;
	printf("Enter the rows : ");
	scanf("%d",&rows);
	
	for(int i=1;i<=rows;i++){
		for(int j=0;j<rows;j++){
			if(i%2!=0){
				printf("%c%d\t",64+rows-j,rows-j);
			}else{
				printf("%c%d\t",65+j,j+1);
			}
		}
		printf("\n");
	}
}
