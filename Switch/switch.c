/* demonstration of switch case */#include<stdio.h>#include<conio.h>void main(){	int i;	printf("enter a number between 1 and 5\n");	scanf("%d",&i);	switch(i)	{		case 1:		printf("You entered 1\n");		break;		case 2:		printf("You entered 2\n");		break;		case 3:		printf("You entered 3\n");		break;		case 4:		printf("You entered 4\n");		break;		case 5:		printf("You entered 5\n");		break;		default:		printf("please enter a valid number between 1 and 5\n");			}	printf("press any key to exit");	getch();}