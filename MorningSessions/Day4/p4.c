/*  1 b 2 d
 *    1 b 2
 *      1 b
 *        1*/ 

#include<stdio.h>
void main(){
	int rows;
	printf("Enter no of rows : ");
	scanf("%d",&rows);

	for( int i=0;i<rows;i++){
		int c=1,n=1;
		for(int j=0;j<i;j++){
			printf("\t");
		}
		for(int k=rows;k>i;k--){
			if((k)%2!=0){
				printf("%c\t",96+c);
			}else{
				printf("%d\t",n);
				n++;

			}
			c++;
		}
		printf("\n");
	}
	
}
