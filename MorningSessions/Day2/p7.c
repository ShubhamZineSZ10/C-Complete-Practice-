/*  WAP to find 1st composite no in a given range */

#include<stdio.h>
void main(){

	int n1,n2;
	printf("Enter the no : ");
	scanf("%d %d",&n1,&n2);
	for(int j=n1;j<=n2;j++){
		
	
		int flag=0;
		for(int i=2;i<j;i++){
			if(j%i==0){
				flag=1;
				printf("%d\n",j);
				break;
			}
		}
		if(flag==1){
			break;
		}
	}
}
