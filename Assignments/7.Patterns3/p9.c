/*    0   1   1   2
 *    3   5   8   13
 *    21  34  55  89
 *    144 233 377 610     */

#include<stdio.h>
void main(){
	int rows;
	printf("Enter the no of rows : ");
	scanf("%d",&rows);
	int first=0,second=1,next;
	for(int i=0;i<rows;i++){
		for(int j=0;j<rows;j++){
			printf("%d\t",first);
			next=first+second;
			first=second;
			second=next;
		}
		printf("\n");
	}

}
