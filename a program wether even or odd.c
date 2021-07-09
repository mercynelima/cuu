//program to check if a number is even or odd
#include<stdio.h>

int main()
{
	int a;
	printf("enter the value of a");
	scanf("%d",&a);
	if(a%2==0){
		printf("that number is even");
	}
	else{
		printf("that number is odd");
	}
}