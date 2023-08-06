/* WAP take a number and print the fibbonaci series till that no*/

#include<stdio.h>
void main(){

	int num;
	printf("Enter the no : ");
	scanf("%d",&num);
	int n1=1,n2=0,i=0;
	printf("0\t");
	while(i<num){

		int x=i;
		
		i=n1+n2;
		if(i>num){
		break;
		}
		
		printf("%d\t",i);
		n1=x;
		n2=i;
		
	
	
	}
	printf("\n");
}
