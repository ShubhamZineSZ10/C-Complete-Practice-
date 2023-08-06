// Structure  Realtime Example
#include<stdio.h>
struct Movie{
	char mName[15];
	int noOfTicket;
	float Price;
}obj1={"Kantara",2,30};
void fun(){
	struct Movie obj3={"Ram Setu",7,1250};
	printf("%s\n",obj3.mName);
	printf("%d\n",obj3.noOfTicket);
	printf("%f\n",obj3.Price);
}
void main(){
	struct Movie obj2={"Drishyam2",2,450};
	printf("%s\n",obj1.mName);
	printf("%d\n",obj1.noOfTicket);
	printf("%f\n",obj1.Price);
	printf("%s\n",obj2.mName);
	printf("%d\n",obj2.noOfTicket);
	printf("%f\n",obj2.Price);
	fun();


}

