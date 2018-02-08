/* multiplication table */
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	printf("enter the number whose you want multiplication table:=");
	scanf("%d",&n);
	int m=0;
	for(i=1;i<=10;i++)
	{
		m=n*i;
		printf("%d\n",m);
	}
}
	