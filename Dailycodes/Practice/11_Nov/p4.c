//ftell()
//ftell() tells the position of character

#include<stdio.h>
void main(){
	FILE *fp=fopen("New.txt","w");
	printf("%ld\n",ftell(fp));           //0

	fprintf(fp,"Shubham");
	printf("%ld\n",ftell(fp));          //7

	fprintf(fp,"Ajay");
	printf("%ld\n",ftell(fp));          //11


	//rewind()   - It will take character position at starting and will Override earlier data
	
	rewind(fp);
	fprintf(fp,"Vishal");
	printf("%ld\n",ftell(fp));        //6
}


//  Earlier          -  ShubhamAjay
//  after rewind()   -  VishalmAjay
