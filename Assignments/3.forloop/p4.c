/*WAP to find sum of no. that are divisible by 5*/

#include<stdio.h>
void main(){
	int start,end;
	printf("Enter the range : ");
	scanf("%d %d",&start,&end);
	int sum=0;
	for(int i=start;i<=end;i++){
		if(i%5==0){
			sum=sum+i;
		}
	}
	printf("The sum is : %d\n",sum);
}
