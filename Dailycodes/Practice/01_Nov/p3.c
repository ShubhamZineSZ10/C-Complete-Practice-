//WAP to assign data to structure in two different ways

#include<stdio.h>

struct CricPlayer {
	char Name[20];
	int jerNo;
	float average;
	char grade;
}obj1={"Rohit Sharma",45,60.45,'A'};
void main(){
	struct CricPlayer obj={"Virat Kohli",18,58.25,'A'};

	printf("%s\n",obj.Name);
	printf("%d\n",obj.jerNo);
	printf("%f\n",obj.average);
	printf("%c\n",obj.grade);
	printf("%s\n",obj1.Name);
	printf("%d\n",obj1.jerNo);
	printf("%f\n",obj1.average);
	printf("%c\n",obj1.grade);
}
