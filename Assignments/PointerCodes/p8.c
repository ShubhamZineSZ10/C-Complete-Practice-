#include<stdio.h>
int reVal(int x);

void main(){
	int x=10;
	int ret = reVal(x);
	printf("%d\n",ret);
}

int reVal(int x){
	int y=x+10;
	int z=y+20;
	int a=54;
	return x,z,y;
}
