#include<stdio.h>
void main(){
	char cName[10]={'s','h','u','b','h','a','m'};
	char *str="vishal";

	printf("%s\n",cName);              //shubham
	printf("%s\n",str);                //vishal

	cName[3]='s';
	printf("%s",cName);               //shusham
	printf("\n");
	
	str[3]='s';
	printf("%s",str);                //segmentation fault (core dumped)
	printf("\n");

}


// We could not make changes in the strings created directly because they are 
// stored in ReadOnly area and are constant
