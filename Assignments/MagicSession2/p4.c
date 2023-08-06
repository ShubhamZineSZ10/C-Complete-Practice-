//WAP that accepts an Array on Length N from the user and calculates squares of all even
//elements and cubes of all odd elements from that array and replaces the elements respectively with answers

#include<stdio.h>
void main(){
	int n;
	printf("Length of Array : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter Elements in Array : ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		if(arr[i]%2==0){
			arr[i]=arr[i]*arr[i];
		}else{
			arr[i]=arr[i]*arr[i]*arr[i];
		}
	}
	for(int i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
}
