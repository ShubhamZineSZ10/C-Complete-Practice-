//FIle Handlin in C
//fopen() and fprintf

#include<stdio.h>
void main(){
	FILE *fp=fopen("Nee.txt","w");                //fopen() is used to open the file
	fprintf(fp,"Hi! This is my first file\n");    //fprintf() is used to enter the data in file
}
