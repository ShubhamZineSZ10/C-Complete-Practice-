//Object initialization in structure using malloc

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Society{
	char sName[20];
	int wings;
	float avgRent;

};
void main(){
	struct Society *ptr=(struct Society*)malloc(sizeof(struct Society));
	struct Society *ptr1=(struct Society*)malloc(sizeof(struct Society));
	
	strcpy((*ptr).sName,"Sun Universe");
	(*ptr).wings=10;
	(*ptr).avgRent=20;

	strcpy(ptr1->sName,"Dream Heights");
	ptr1->wings=12;
	ptr1->avgRent=22;

	printf("%s\n",ptr->sName);
	printf("%d\n",ptr->wings);
	printf("%f\n",ptr->avgRent);

	printf("%s\n",(*ptr1).sName);
	printf("%d\n",(*ptr1).wings);
	printf("%f\n",(*ptr1).avgRent);


}
