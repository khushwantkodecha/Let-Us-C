#include<stdio.h>
#include<conio.h>
int main()
{
	int per;
	printf("enter your btech aggregate percentage:\n");
	scanf("%d",&per);
	if(per<65)
	{
		printf("You are not eligable for interview");
	}
	else
	{
		printf("You are eligable for interview");
	}
	return 0;
	getch();
}