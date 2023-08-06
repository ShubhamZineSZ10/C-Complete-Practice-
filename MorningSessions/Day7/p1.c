/*          A  b  C  d
 *             d  E  f
 *                F  g
 *                   g     */


#include<stdio.h>
void main(){
	int rows;
	printf("Enter no of rows : ");
	scanf("%d",&rows);
	int n=1;

	for(int i=1;i<=rows;i++){
		for(int j=1;j<i;j++){
			printf("\t");
		}
		for(int j=rows;j>=i;j--){
			if((i+j)%2!=0){
				printf("%c\t",64+n);
				n++;
			}else{
				printf("%c\t",96+n);
				n++;
			}
		}
		printf("\n");
		n--;
	}
}
