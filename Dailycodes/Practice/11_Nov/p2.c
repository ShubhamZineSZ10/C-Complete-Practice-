//fscanf()

#include<stdio.h>
void main(){
	FILE *fp=fopen("Nee.txt","r");      // we would always required to use fopen()
	char ch;
	fscanf(fp,"%c",&ch); 
	printf("%c\n",ch);


	fscanf(stdin,"%c",&ch);       //scanf() internally calls fscanf()
	printf("%c\n",ch); 

}
