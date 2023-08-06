/* WAP tak two characters if that are equal then print as it is else print there difference*/

#include<stdio.h>
void main(){
	char ch1,ch2;
	int z;
	printf("Enter both the characters : ");
	scanf("%c %c",&ch1,&ch2);

	if(ch1==ch2){
		printf("characters are equal : %c\n",ch1);
	}else{

		z=ch1-ch2;
		if(z>0){
		printf("Difference is %d\n",z);
		}else{
		z=ch2-ch1;	
		printf("difference is %d\n",z);
		}

	}

}
