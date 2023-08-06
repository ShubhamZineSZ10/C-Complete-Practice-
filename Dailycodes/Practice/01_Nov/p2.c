//WAP to assign data to structure

#include<stdio.h>

struct CricPlayer {
	char Name[20];
	int jerNo;
	float average;
	char grade;
};
void main(){
	struct CricPlayer obj={"Virat Kohli",18,58.25,'A'};
	printf("%s\n",obj.Name);
	printf("%d\n",obj.jerNo);
	printf("%f\n",obj.average);
	printf("%c\n",obj.grade);
}
