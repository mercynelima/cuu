//program to check if a number is divisible by 17
#include<stdio.h> 

int main()
{
	int n;
	printf("enter the value of n");
	scanf("%d",&n);
	if(n%17==0) {
		printf("that number is divisible by 17");
	}
	else{
		printf("that number is not divisible by 17");
	}
}