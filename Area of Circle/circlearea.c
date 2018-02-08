#include<conio.h>
#include<stdio.h>
void main()
{
	int r;
	printf("enter the value of radius of circle\n");
	scanf("%d",&r);
	float area=(3.14)*r*r;
	printf("area of circle is %0.3f\n",area);
	getch();
}