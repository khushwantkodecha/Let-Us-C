/* maximum in 2 numbers */
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("enter the values of a and b\n");
	scanf("%d%d",&a,&b);
	if(a>b)
		printf("max is a:=%d\n",a);
	else
		printf("max is b:=%d\n",b);
}