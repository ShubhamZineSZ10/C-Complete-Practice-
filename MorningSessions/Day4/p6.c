/*   1  2  3  4  5
 *   6  7  8  9  10
 *   12 18 20 21 24
 *   27 30 36 40 42
 *   45 48 50 54 60  */

#include<stdio.h>
void main(){
	int rows;
	printf("Enter rows : ");
	scanf("%d",&rows);
	int num=1;

	for(int i=0;i<rows;i++){
			
		for(int j=0;j<rows;){
		
			int temp=num,sum=0,rem=0;	

			while(temp!=0){
				
				rem=temp%10;
				sum=sum+rem;
				temp=temp/10;
			}
			if(num%sum==0){
				printf("%d\t",num);
				j++;
			}
			
			num++;
		}
		printf("\n");
	}
}
