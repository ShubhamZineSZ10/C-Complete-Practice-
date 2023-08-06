//Using Library functions for string
//   strlen()

/*#include<stdio.h>
long unsigned int strlen(const char *);


void main(){
	
	char *str1="Shubham";
	char *str2="Shubham Zine";

	printf("%ld\n",strlen(str1));
	printf("%ld\n",strlen(str2));
}*/

// Creating our function to find the length
//mystrlen()
#include<stdio.h>

int mystrlen(char *str){
	int count=0;
	while(*str!='\0'){
		str++;
		count++;
	}
	return count;

}

void main(){
	char *str1="Shubham";
	char *str2="Zine";

	printf("%d\n",mystrlen(str1));
	printf("%d\n",mystrlen(str2));
}

