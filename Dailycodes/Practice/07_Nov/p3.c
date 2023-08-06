//Anonymous/Unnamed Structure

#include<stdio.h>

struct{                                //unnamed structure
	int x;
	int y;
}obj={10,20};

void main(){
	printf("%d\n",obj.x);
	printf("%d\n",obj.y);
}
