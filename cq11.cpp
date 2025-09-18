#include<stdio.h>
int main(){
	int a,b;
	printf("enter two num:");
	scanf("%d %d" , &a, &b);
	((a+b) % 2== 0) ? printf("sum is even\n"):
		printf("sum is odd\n");
	return 0;
} 