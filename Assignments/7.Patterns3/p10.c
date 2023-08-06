/*    D1 C2 B3 A4
 *    e5 f4 g3 h2
 *    F3 E4 D5 C6
 *    g7 h6 i5 j4   */

#include<stdio.h>
void main(){
	int rows;
	printf("Enter the no of rows : ");
	scanf("%d",&rows);
	
	for(int i=1;i<=rows;i++){
		int n=rows+i-1;
		int m=rows+i-1;
		int k=i;
		for(int j=1;j<=rows;j++){
			if(i%2!=0){
				
				printf("%c%d\t",64+n,k++);
				n--;
				
			}else{
				
				printf("%c%d\t",96+n,m--);
				n++;
				
			}
		}
		printf("\n");
	}

}
