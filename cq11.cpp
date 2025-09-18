#include<stdio.h>
int main(){
	int n;
	printf("enter a three digit num:");
	 scanf("%d ,&n");
	 int first =n /100;
	(first % 2 ==0)? printf(" first digit is even\n")
	                : printf("first digit is odd\n");
	return 0;
}