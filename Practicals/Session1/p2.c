//WAP to print no divisible 3 and 7 between a range. but in reverse order
#include<stdio.h>
void main(){
	int start,end;
	printf("Enter start: ");
	scanf("%d",&start);
	printf("Enter end: ");
	scanf("%d",&end);
	for(int i=end;i>=start;i--){
		if(i%3==0 && i%7==0){
			printf("%d\t",i);
		}
	}
	printf("\n");
}
