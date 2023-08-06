/*  1 2 3
 *  a b c
 *  1 2 3
 *  a b c */

#include<stdio.h>
void main(){
	int rows;
	printf("Enter no of rows : ");
	scanf("%d",&rows);
	
	for(int i=1;i<=rows;i++){
	int n=1;
	char ch='a';
		for(int j=1;j<=rows-1;j++){
			if(i%2==0){
				printf("%c\t",ch);
				ch++;
			}else{
				printf("%d\t",n);
				n++;
			}
		}
		printf("\n");
	}
}
