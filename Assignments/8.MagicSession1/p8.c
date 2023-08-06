/*   0 
 *   1 1
 *   2 3  5
 *   8 13 21 34 */

#include<stdio.h>
void main(){
	int rows;
	printf("Enter the no of rows: ");
	scanf("%d",&rows);
	int first=0,second=1,next;
	
	for(int i=1;i<=rows;i++){
	
		for(int j=0;j<i;j++){
	
			printf("%d\t",first);
			next=first+second;
			first=second;
			second=next;
		}
		printf("\n");
	}

}

