/* print a to z using for loop */
#include<stdio.h>
#include<conio.h>
void main()
{
	for(char c='a';c<='z';c++)
	{
		printf("%c\n",c);
	}
	printf("enter any key to come back on command");
	getch();
}