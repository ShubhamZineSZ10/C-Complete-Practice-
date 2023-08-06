/*   2  3  5
 *   7  11 13
 *   17 19 23 */

#include<stdio.h>
void main(){
	int rows;
	printf("Enter no of rows : ");
	scanf("%d",&rows);
	int num=2;
	
	for(int i=0;i<rows;i++){
		for(int j=0;j<rows;j++){
			while(1){
				int flag=0;
				for(int k=2;k<num;k++){
					if(num%k==0){
						flag=1;
						num++;
						break;		
					}
					
				}
				if(flag==0){
				printf("%d\t",num);
				num++;
				break;
			}}
		}
		printf("\n");
	}
}
