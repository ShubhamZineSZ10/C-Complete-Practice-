#include<stdio.h>
void main(){
	char ch;
	printf("Enter the character : ");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
		printf("You entered a Vowel\n");
	}else{
		printf("You entered a Consonant\n");
	}
}
