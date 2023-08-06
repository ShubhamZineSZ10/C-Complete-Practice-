/* WAP to check whether the given series is pythagorean triplet or not */

#include<stdio.h>
void main(){

	int a,b,c;
	printf("Enter the sides : ");
	scanf("%d %d %d",&a,&b,&c);

	if(a*a==b*b+c*c){

		printf("It is a Pythagorean Triplet\n");
	
	}else if(b*b==a*a+c*c){
	
		printf("It is a Pythagorean Triplet\n");
	
	}else if(c*c==a*a+b*b){
	
		printf("It is a Pythagorean Triplet\n");
	
	}else{
	
		printf("It is not a pythagorean triplet\n");
	}
}
