#include<stdio.h>

float circle (int r);
int main()
{
	int radius;
	float ans;
	printf("enter the radius of a circle");
	scanf("%d",&radius);
	ans=circle(radius);
	printf("the radius is5f",ans);
	return 0;
}
	
	float circle(int r)
	{
	float area;
	area=3.14*r*r;
	return area;
}