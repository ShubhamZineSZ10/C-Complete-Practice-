/*            1
 *          1 2 3
 *        1 2 3 4 5
 *      1 2 3 4 5 6 7    */

#include<stdio.h>
void main(){
	int rows;
	printf("Enter the no of rows : ");
	scanf("%d",&rows);

	for(int i=0;i<rows;i++){
		int n=1;
		for(int j=rows-1;j>i;j--){
			printf("\t");
		}

		for(int j=1;j<=(2*i)+1;j++){
			printf("%d\t",n);
			n++;
		}
		printf("\n");
	}
}
