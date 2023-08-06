//Pointer to structure  or Structure Pointer

#include<stdio.h>
struct Movie{
	char mName[20];
	int count;
	float price;
}obj1={"Ram Setu",2,400};
void main(){
	struct Movie *sptr=&obj1;             //structure pointer initialisation

	printf("%s\n",obj1.mName);
	printf("%d\n",obj1.count);
	printf("%f\n",obj1.price);

	printf("%s\n",sptr->mName);
	printf("%d\n",sptr->count);
	printf("%f\n",sptr->price);

}
