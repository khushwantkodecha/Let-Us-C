#include<stdio.h>
#include<conio.h>
void main()
{
	maxN();
}
void maxN()
{
	int n;
	int a[n];
	int temp;
	for(int i=0;i<n;i++)
	{
		if(a[i]>temp)
		{
			temp=a[i];
		}
	}
	printf("max is",temp);
}