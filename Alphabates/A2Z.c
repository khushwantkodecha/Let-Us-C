/* print A to Z using loop */
#include<stdio.h>
#include<conio.h>
void main()
{
	char var;
	for(var='A';var<='Z';var++)
	{
		printf("%c\n",var);
	}
	getch();
}