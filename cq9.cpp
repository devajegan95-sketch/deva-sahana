#include<stdio.h>
int main(){
	int n;
	printf("enter a num:");
	 scanf("%d ,&n");
	( n & 1)? printf("odd\n"):
	printf("even\n");
	return 0;
}