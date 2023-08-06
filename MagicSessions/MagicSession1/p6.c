/*  D e F g
 *  e D c B
 *  F g H i
 *  g F e D      */


#include<stdio.h>
void main(){
	int rows;
	printf("Enter the no of rows : ");
	scanf("%d",&rows);
	int n=rows;
	for(int i=0;i<rows;i++){
		int m=n+i;
		for(int j=1;j<=rows;j++){
			if(i%2==0){
				if((i+j)%2==0){
					printf("%c\t",96+m);
					m++;
				}else{

					printf("%c\t",64+m);
					m++;
				}
			}else{
				if((i+j)%2==0){
					printf("%c\t",96+m);
					m--;
				}else{
					printf("%c\t",64+m);
					m--;
				}
			}
		}
		printf("\n");
	}

}
