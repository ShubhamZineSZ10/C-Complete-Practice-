/* WAP, that takes no from 0 to and print its spelling*/ 

#include<stdio.h>
void main(){
	int x;
	printf("Enter the month no. : ");
	scanf("%d",&x);
	
	switch(x){

		case 0 :
			printf("ZERO \n");
                        break;
			
		case 1 :
			printf("ONE\n");
		
                        break;
		case 2 :
			printf("TWO\n");
	
                        break;
		case 3 :
			printf("THREE\n");
	
                        break;
		case 4 :
			printf("FOUR\n");
		
                        break;
		case 5 :
			printf("FIVE\n");
			
                        break;
		default :
		        printf("the no is greater than five");
			break;	
	
	}

}
