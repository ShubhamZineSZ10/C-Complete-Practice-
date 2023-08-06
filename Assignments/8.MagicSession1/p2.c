/* WAP to count digits in given no */

#include<stdio.h>
void main(){
	int num;
	printf("Enter the no : ");
	scanf("%d",&num);
	int rem=0,count=0;
	
	while(num>0){

		if(num%10>=0){
		
		count++;}
		num=num/10;
	}
	printf("count is : %d\n",count);
}
