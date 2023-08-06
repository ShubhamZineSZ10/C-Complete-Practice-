/*  4 a 3 b
/*  4 a 3 b
/*  4 a 3 b
/*  4 a 3 b            */

#include<stdio.h>
void main(){
	int rows;
	printf("Enter the no of rows : ");
	scanf("%d",&rows);
	
	for(int i=1;i<=rows;i++){
	int n=rows;
		for(int j=0;j<rows;j++){
			if(j%2==0){
				printf("%d\t",n);
				n--;
			}else{
				printf("%c\t",64+rows-n);
			}
		}
		printf("\n");
	}
}
