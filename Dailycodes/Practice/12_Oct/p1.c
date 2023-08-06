#include<stdio.h>
void main(){
	char cName[10]={'s','h','u','b','h','a','m'};
	char *str="vishal";

	printf("%s\n",cName);
	printf("%s\n",str);

	for(int i=0;i<10;i++){
		printf("%c",cName[i]);
	}
	printf("\n");
	
	for(int i=0;i<6;i++){
		printf("%c",str[i]);
	}
	printf("\n");

}
