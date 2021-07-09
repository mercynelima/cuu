//program to find the grade of a student
#include<stdio.h>
int main(){
	
	int a;
	int b;
	int c;
	int avg;
	
	printf("enter marks for english\n");
	scanf("%d",&a);
	  printf("enter marks for chemistry\n");
	  scanf("%d",&b);
	  printf("enter marks for physics\n");
	  scanf("%d",&c);
	  avg=(a+b+c)/3;

	printf("avg%d\n",avg);
	
	
	if(avg>=70 &&avg<=100){
		printf("GRADE A");
	}
	else if(avg>=60 &&avg<=69){
		printf("GRADE B");
	}
	else if(avg>=50 &&avg<=59){
		printf("GRADE C");
	}
	else if(avg>=40 &&avg<=49){
		printf("GRADE D");
	}
	else if("avg>=0 &&avg<=39"){
		printf("GRADE D");
	}	
}

