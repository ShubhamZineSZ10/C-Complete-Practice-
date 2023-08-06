// Realtime Ex (taking input data from user)

#include<stdio.h>
struct OTT{
	char pName[20];
	int account;
	float price;
};
void main(){
	struct OTT obj1={"Netflix",4,200};
	struct OTT obj2;

	printf("Enter the OTT platform name : \n");
	gets(obj2.pName);
	printf("Enter no. of accounts: ");
	scanf("%d",&obj2.account);
	printf("Enter the subscription amount: ");
	scanf("%f",&obj2.price);
        printf("\n");

	puts(obj1.pName);
	printf("%d\n",obj1.account);
	printf("%f\n",obj1.price);

	puts(obj2.pName);
	printf("%d\n",obj2.account);
	printf("%f\n",obj2.price);
}
