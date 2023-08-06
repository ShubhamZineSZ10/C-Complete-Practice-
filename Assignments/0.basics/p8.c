#include<stdio.h>
void main(){
	char ch;
	printf("Enter the character : ");
	scanf("%c",&ch);
	if(ch>='A'&& ch<='Z'){
		printf("You entered a uppercase character\n");
	}else if(ch>='a' && ch<='z'){
		printf("You entered a lowercase character\n");
	}else {
		printf("Invalid Input\n");
	}
}
