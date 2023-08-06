/*   3 b 2 d
 *   b 2 d
 *   1 d
 *   d          */

#include<stdio.h>
void main(){
	int rows;
	printf("Enter the no of rows : ");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++){
		int n=rows-i,c=i;
		for(int j=rows;j>=i;j--){
			if((i+j)%2!=0){
				printf("%d\t",n);
				n--;
			}else{
				printf("%c\t",64+c);
			}
			c++;
		}
		printf("\n");
	}
}
