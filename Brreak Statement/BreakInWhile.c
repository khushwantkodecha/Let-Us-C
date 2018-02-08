/* break in while loop */
#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1;
	while(i<=10)
	{
		printf("%d\n",i);
		i++;
		if(i>5)
			break;
	}
	printf("enetr any key to exit");
	getch();
}