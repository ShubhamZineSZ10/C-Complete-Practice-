//strcmpi()
/*
#include<stdio.h>
#include<string.h>
void main(){
	char *str1="Vishal";
	char *str2="Vishvas";
	printf("%d\n",strcmpi(str1,str2));

}*/

//mystrcmpi()

#include<stdio.h>
int mystrcmpi(char *str1,char *str2){
	while(*str1!='\0' && *str2!='\0'){
		if(*str1==*str2||*str1-*str2==-32||*str1-*str2==32){
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
	char *str2="VishAL";
	printf("%d\n",mystrcmpi(str1,str2));
}
