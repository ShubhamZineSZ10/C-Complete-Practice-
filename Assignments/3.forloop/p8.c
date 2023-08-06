/* WAp to take two characters and print them if the are same else print there difference*/

#include<stdio.h>
void main(){
	char ch1,ch2;
	printf("Enter the Characters : ");
	scanf("%c %c",&ch1,&ch2);

	if(ch1==ch2){
		printf("%c\n",ch1);
	}else if(ch1>ch2){
		printf("%d\n",ch1-ch2);
	}else{
		printf("%d\n",ch2-ch1);
	}

}
