/* WAP to print first prime no between a given range */

#include<stdio.h>
void main(){
	int n1,n2;
	printf("enter range : ");
	scanf("%d%d",&n1,&n2);

	for(int i=n1;i<=n2;i++){
		int flag=0;
		for(int j=2;j<n1;j++){
			if(i%1==0 && i%j==0){
				flag=1;
				
			}
		}if(flag==0){
			printf("%d\n",i);
			break ;

		}
		
	}
}
