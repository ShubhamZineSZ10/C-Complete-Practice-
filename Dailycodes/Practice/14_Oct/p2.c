//strcmp()
/*
#include<stdio.h>
#include<string.h>
void main(){
	char *str1="Vishal";
	char *str2="Vishvas";
	printf("%d\n",strcmp(str1,str2));

}*/

//mystrcmp()

#include<stdio.h>
int mystrcmp(char *str1,char *str2){
	while(*str1!='\0' && *str2!='\0'){
		if(*str1==*str2){
			str1++;
			str2++;
		}else{
			return *str1-*str2;

		}
	}
	return 0;
}
void main(){
	
	char *str1="Vishal";
	char *str2="Vishvas";
	printf("%d\n",mystrcmp(str1,str2));
}
