/* WAP to print characters of even ASCII values */

#include<stdio.h>
void main(){
	int start,end;
	printf("Enter the range : ");
	scanf("%d %d",&start,&end);
	for(int i=start;i<=end;i++){

		printf("%d = %c \n",i,i);
		
	}
}
