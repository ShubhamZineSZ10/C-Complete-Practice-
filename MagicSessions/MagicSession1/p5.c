
#include<stdio.h>
void main(){
	int rows;
	printf("Enter no of rows : ");
	scanf("%d",&rows);
	int num=1;
	for(int i=1;i<=rows;i++){

		for(int j=1;j<=rows;j++){
		int count=0;
			for(int k=2;k<num;k++){
				if(num%k==0){
					count++;
					break;	
				
				}
				if(count==0){
					printf("%d\t",num);
				
				}
				num++;
			}

		
		}
		printf("\n");
	}
}
