#include<stdio.h>
int main(){
	int last digit;       
	printf("enter num");
	scanf("%d,%d",a,b);
	printf(" before swape a=%d,b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swape a=%d,b=%d",a,b);
  	return 0;
}