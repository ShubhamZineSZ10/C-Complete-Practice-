#include<stdio.h>
void main(){
	int x=9,ans;
	ans = ++x + x++ + ++x;

	printf("%d\n",ans);
	printf("%d\n",x);

	int ans1 = ++x + ++x + ++x + ++x;
	printf("%d\n",ans);
	printf("%d\n",x);

	int ans2= x++ + x++ + ++x + x++ + ++x;
	printf("%d\n",ans2);
	printf("%d\n",x);

	int ans3 = x++ + x++ + x++ + x++;
	printf("%d\n",ans3);
	printf("%d\n",x);

}
