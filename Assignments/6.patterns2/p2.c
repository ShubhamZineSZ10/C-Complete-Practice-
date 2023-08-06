/*   3 2 1
 *   c b a
 *   3 2 1
 *   c b a             */

#include<stdio.h>
void main(){
	int rows;
	printf("Enter the no of rows : ");
	scanf("%d",&rows);
	
	for(int i=1;i<=rows;i++){
		int n=rows-1;
		for(int j=1;j<=rows-1;j++){
			
			if(i%2==0){
				
				printf("%c\t",64+n);
			}else{
				printf("%d\t",n);
			}
			n--;
		}
		printf("\n");
			
	}
}
