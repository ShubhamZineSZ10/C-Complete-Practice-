#include<stdio.h>
/*void sumArr(int (*ptr)[],int row, int col){
	int sum=0;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d\n",(*((*ptr+i)+j)));	
		//	printf("%d\n",i);
		
		//	printf("%d\n",j);	
			sum=sum+*((*ptr+i)+j);
	
		}
	}
	
	printf("Sum= %d\n",sum);

}*/

void main(){
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int row=3;
	int col=3;
//	int arrSize = sizeof(arr)/sizeof(int);

//	sumArr(arr,row,col);

	int (*ptr)[]=arr;
	printf("%p\n",ptr);
	printf("%p\n",arr);
	for(int i=0; i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d\n",*(*(ptr+i)+j));}
		}
}
