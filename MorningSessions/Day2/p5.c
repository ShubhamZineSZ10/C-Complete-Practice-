/*   D C B A
 *   e f g h
 *   F E D C
 *   g h i j */


#include<stdio.h>
void main(){
	int rows;
	printf("Enter the no of rows: ");
	scanf("%d",&rows);
	for(int i=0;i<rows;i++){
		int n=rows+i;
		for(int j=0;j<rows;j++){
		
			if(i%2!=0){
				printf("%c\t",96+n);
				n++;

			}else{
				printf("%c\t",64+n);
				n--;
			}			
		}
		printf("\n");
	}
}
