/* take a samll letter from user 
and convert it into capital letter */

#include<stdio.h>
#include<conio.h>
void main()
{
	char c;
	printf("enter a letter in samall letter\n");
	scanf("%c",&c);
	printf("capital form of entered letter is %c",c-32);
	getch();
}