#include<stdio.h>
void main(){
	int num=10;
	char ch='S';
	float rs=55.20;
	double crmoney=123456.676543;

	printf("size of %d is : %ld\n",num,sizeof(num));
	printf("size of %c is : %ld\n",ch,sizeof(ch));
	printf("size of %f is : %ld\n",rs,sizeof(rs));
	printf("size of %f is : %ld\n",crmoney,sizeof(crmoney));
}
