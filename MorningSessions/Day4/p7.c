/*  WAP to print Niven no in  a give range*/

#include<stdio.h>
void main(){
	int start,end;
	printf("Enter range: ");
	scanf("%d%d",&start,&end);

	for(int i=start;i<=end;i++){
		int num=i;
		int rem=0;
		int sum=0;

		while(num!=0){
			rem=num%10;
			sum=sum+rem;
			num=num/10;
		}
		if(i%sum==0){
			printf("%d\t",i);
		}
	}
	printf("\n");

}
