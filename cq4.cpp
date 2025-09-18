#include<stdio.h>
int main(){
	int a,b;
	printf("enter two num:");
	scanf("%d%d ,&a,&b");
	((a-b)%2==0)? printf("diff is even\n"):
	printf("dff is odd\n");
	return 0;
}