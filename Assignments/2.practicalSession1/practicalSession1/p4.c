/* WAP, in which according to the month number print the no. of days in that month*/ 

#include<stdio.h>
void main(){
	int x;
	printf("Enter the month no. : ");
	scanf("%d",&x);
	
	switch(x){

		case 0 :
			printf("Invalid Input");
                        break;
			
		case 1 :
			printf("Jan has 31 days\n");
		
                        break;
		case 2 :
			printf("Feb has 28 days\n");
	
                        break;
		case 3 :
			printf("March has 31 days\n");
	
                        break;
		case 4 :
			printf("April has 30 days\n");
		
                        break;
		case 5 :
			printf("May has 31 days\n");
			
                        break;
		case 6 :
			printf("June has 30 days\n");

                        break;

		case 7 :
			printf("July has 31 days\n");

                        break;
		case 8 :
			printf("August has 31 days\n");
                                       
                        break;
		case 9:
			printf("Sept has 30 days\n");
		
                        break;
		case 10 :	
			printf("Oct has 31 days\n");
	
                        break;
		case 11 :
			printf("Nov has 30 days\n");
 
                        break;
		case 12:	
			printf("Dec has 31 days\n");
	
                        break;
	
	}

}
