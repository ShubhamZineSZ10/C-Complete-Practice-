/*             d
 *           c d
 *         b c d
 *       a b c d             */

#include<stdio.h>
void main(){
	int rows;
	printf("Enter no of rows : ");
	scanf("%d",&rows);
		
	for(int i=1;i<=rows;i++){
		int n=rows-i+1;
		for(int j=rows-i;j>=1;j--){
			printf("\t");
		}
		for(int j=1;j<=i;j++){
			if((j+i)%2==0){
				printf("%c\t",96+n);
				n++;
			}else{
				printf("%c\t",64+n);
				n++;
			}
		}
	printf("\n");
	}
	
}
