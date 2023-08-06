//Array of Structure

#include<stdio.h>
struct Player{
	char pName[20];
	int jerNo;
	float average;
};
void main(){
	struct Player obj1={"Virat Kohli",18,56.25};
	struct Player obj2={"Rohit Sharma",45,60.45};
	struct Player obj3={"Suryakumar Yadav",63,75.4};

	struct Player arr[]={obj1,obj2,obj3};     //Array of Structure

	for(int i=0;i<3;i++){
		printf("%s\n",arr[i].pName);
		printf("%d\n",arr[i].jerNo);
		printf("%f\n",arr[i].average);
		printf("\n");
	}
}
