/*    a B c D
 *    b C d E
 *    c D e F
 *    d E f G      */

#include<stdio.h>
void main(){
	int rows;
	printf("Enter the no of rows : ");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		int n=i;
		for(int j=1;j<=rows;j++){
			if(j%2!=0){
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
