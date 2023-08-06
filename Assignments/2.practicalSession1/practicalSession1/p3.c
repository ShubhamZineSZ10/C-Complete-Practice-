/* WAP to find min among 3 numbers*/

#include<stdio.h>
void main(){
	int x,y,z;
	printf("Enter the numbers : ");
	scanf("%d %d %d",&x,&y,&z);

	if(x<y && x<z){
		printf("%d is min\n",x);

	}else if(y<x && y<z){
		printf("%d is min\n",y);

	}else if(z<x && z<y){
		printf("%d is min\n",z);

	}else if(x==y==z){
		printf("All are equal\n");
	
	}else{
		printf("Two are equal");
	}
} 
