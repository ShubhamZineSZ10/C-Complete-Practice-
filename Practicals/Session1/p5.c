//       a b c
//       d e f
//       g h i          row=3

#include<stdio.h>
void main(){
	int rows;
	printf("Enter rows: ");
	scanf("%d",&rows);
	char x='a';
	for(int i=1;i<=rows;i++){
		for(int i=1;i<=rows;i++){
			printf("%c\t",x);
			x++;
		}
		printf("\n");
	}
}
