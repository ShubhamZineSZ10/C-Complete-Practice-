/* WAP to print all the even no in reverse order and
 * odd no in standard order, both seperately within a range*/

#include<stdio.h>
void main(){

	int start,end;
	printf("Enter Start : ");
	scanf("%d",&start);
	printf("Enter End : ");
	scanf("%d",&end);
	
	
	
if(start>0){			
	for(int i=end;i>=start;i--){
		if(i%2==0){
			printf("%d\t",i);
		}
	}
	printf("\n");
	for(int i=start;i<=end;i++){
		if(i%2!=0){	
			printf("%d\t",i);
		}
	}
	printf("\n");

}else{

	printf("Invalid Input - Enter the value greater than 1\n ");
}
}
