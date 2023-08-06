//   1 2 3 4
//   a b c d
//   5 6 7 8
//   e f g h      rows=4

#include<stdio.h>
void main(){
	int rows;
	printf("Enter rows: ");
	scanf("%d",&rows);
	int m=1,n=1;
	for(int i=1;i<=rows;i++){
		
		if(i%2==0){
			
			for(int j=1;j<=rows;j++){
				printf("%c\t",96+n);
				n++;
			}
		}else{
			
			for(int j=1;j<=rows;j++){
				printf("%d\t",m);
				m++;
				}	
				
			}
		printf("\n");
	}
}
