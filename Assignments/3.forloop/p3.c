/* WAP to print all even numbers in reverse order and odd numbers in the
 * standard way both seperately within a range*/

#include<stdio.h>
void main(){
	int start,end;
	printf("Enter the range : ");
	scanf("%d %d",&start,&end);

	for(int i=end;i>=start;i--){
	
		if(i%2==0){
			printf("%d\t",i);
		}
	}printf("\n");
	for(int i=start;i<=end;i++){
		if(i%2!=0){
			printf("%d\t",i);
		}
	}printf("\n");	
	

}
