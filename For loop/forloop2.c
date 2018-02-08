/* print the number between 1 and 100 that are divisable by 3 and 5 */
#include<stdio.h>
#include<conio.h>
void main()
{
	for(int i=1;i<=100;i++)
	{
		if(i%3==0 && i%5==0)
		{
			printf("%d\n",i);
		}
	}
}