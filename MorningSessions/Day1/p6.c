/*  D c B a
 *  a B c D
 *  F e D c
 *  b C d E     */

#include<stdio.h>
void main(){
	int rows;
	printf("Enter the no of rows : ");
	scanf("%d",&rows);
	int a=1;
	for(int i=0;i<rows;i++){
		int n=rows+i,m=i;
		
		m=a;
		
		for(int j=0;j<rows;j++){
			
			if(i%2==0){

				if((i+j)%2==0){
					printf("%c\t",64+n);
					n--;
				}else{
					printf("%c\t",96+n);
					n--;
				}
				
			}else{
				if((i+j)%2==0){
					printf("%c\t",64+m);
					m++;
				}else{
					printf("%c\t",96+m);
					m++;
				}
			
			}
	
			
		}
		if(i%2!=0){
			a++;
		}
		
		printf("\n");
	}
}
