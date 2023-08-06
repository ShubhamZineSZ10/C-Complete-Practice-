/* WAP to calculate LCM of two given no */

#include<stdio.h>
void main(){
	int num1,num2;
	printf("Enter the no,s : " );
	scanf("%d %d",&num1,&num2);
	int temp=1,LCM=0;
	for(int i=1;i<=num2;i++){
		if((num1 %i==0)&&( num2 %i==0)){
			temp=i;
		}
	}
	LCM=(num1*num2)/temp;
	printf("%d\n",LCM);

}
