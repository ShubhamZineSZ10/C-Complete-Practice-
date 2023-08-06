/* WAP to print composite no between given range*/

#include<stdio.h>
void main(){
	int start,end;
	printf("Enter the start : ");
	scanf("%d",&start);
	printf("Enter the end : ");
	scanf("%d",&end);
	

	for(int i=start;i<=end;i++){
		int count=0;
		for(int j=2;j<=i;j++){
			if(i%j==0){
			count++;	
			}
		}
		if(count!=1){
			printf("%d\t",i);
		}		
	}printf("\n");
	
}
