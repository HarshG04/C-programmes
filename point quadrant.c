#include<stdio.h>
int main()
{	
	float a,b;
	printf("Enter The Co-ordinate of X-axis: ");
	scanf("%g",&a);
	printf("Enter The Co-ordiante of Y-axis: ");
	scanf("%g",&b);
	
	if(a>0 && b>0)
	printf("Your point is in 1st Quadrant");
	
	else if(a<0&&b>0)
	printf("Your Point Is In 2nd Quadrant");
	
	else if(a<0&&b<0)
	printf("Your Point Is In 3rd Quadrant");
	
	else printf("Your Point Is In 4th Quadrant");
	
	return 0;
}
