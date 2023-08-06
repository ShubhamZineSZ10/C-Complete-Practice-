// putw() and getw()
// putw() is used to enter integer values to file
// getw() is used to get or print iteger values from file

#include<stdio.h>
void main(){
	FILE *fp=fopen("Demo.txt","w");
	int num1=10;
	int num2=20;
	printf("%ld\n",ftell(fp));

	putw(num1,fp);
	putw(num2,fp);

	printf("%ld\n",ftell(fp));

	rewind(fp);

	printf("%ld\n",ftell(fp));

	printf("%d\n",getw(fp));
	printf("%d\n",getw(fp));

}
