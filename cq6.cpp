#include<stdio.h>
int main(){
	int a,b;
	printf("enter two num:");
	 scanf("%d%d , &a,&b");
	(a<b)? printf("%d is smallest\n",a):
	printf("%d is smallest\n",b);
	return 0;
}