#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("enter the obtained marks in physics,maths and chemistery repectively\n");
	scanf("%d%d%d",&a,&b,&c);
	int sum=a+b+c;
	printf("total obtained marks in all subjects is %d\n",sum);
	int avg;
	avg=sum/3;
	printf("average of total marks is %d\n",avg);
    getch();
}


	
	
	