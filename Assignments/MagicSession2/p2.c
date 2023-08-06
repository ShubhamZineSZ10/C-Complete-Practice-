//WAP that accepts no. from user , seperste digits from that no. &enter them in an Array then sort the array in assecnding order

#include<stdio.h>
void main(){
	int num;
	printf("Enter the no.: ");
	scanf("%d",&num);
	int temp=num;
	int rem=0;
	int count=0;
	while(temp!=0){
		count++;
		temp=temp/10;
	}
	printf("%d\n",count);
	int temp1=num;
	int arr[count];
	int n=0;
	for(int i=0;i<count;i++){
		rem=temp1%10;
		arr[i]=rem;
		temp1=temp1/10;
	}
	int tem=0;
	for(int i=0;i<count;i++){
		for(int j=i+1;j<count;j++){
			if(arr[i]>arr[j]){
				tem=arr[i];
				arr[i]=arr[j];
				arr[j]=tem;
			}
		}

	}
	for(int i=0;i<count;i++){
		printf("|%d|",arr[i]);
	}
	printf("\n");

}
