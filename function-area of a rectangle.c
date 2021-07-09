#include<stdio.h>

float rectangle(int l,int w);
int main()
{
	int length;
	int width;
	float ans;
	printf("enter length of the rectangle:");
	scanf("%d",&length);
	printf("enter width of the rectangle:");
	scanf("%d",&width);
	ans=rectangle(length,width);
	printf("the area %f",ans);
	return 0;
}

float rectangle(int l,int w)
{
	float area;
	area=l*w;
	return area;
}