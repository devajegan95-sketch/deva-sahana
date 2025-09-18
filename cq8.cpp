#include<stdio.h>
int main(){
	int n;
	printf("enter a num:");
	 scanf("%d ,&n");
	( n %10)% 3 ==0? printf("last digit divisible by 3\n")
	                : printf("last digit not divisible by3\n");
	return 0;
}