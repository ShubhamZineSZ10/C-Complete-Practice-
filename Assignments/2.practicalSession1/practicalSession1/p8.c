/* WAP to check whether the angles form a valid triangle or not*/

#include<stdio.h>
void main(){

	float a,b,c;
	printf("Enter the angles of triangle : ");
	scanf("%f %f %f",&a,&b,&c);
	if(a==0 || b==0 || c==0){
		printf("Invalid input\n");
	}
	else if(a+b+c==180){
		printf("It is a valid triangle\n");
	}else{
		printf("It is not a valid triangle\n");
	}
}
