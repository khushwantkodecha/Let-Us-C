/* Demonstration of goto statement */#include<stdio.h>#include<conio.h>void main(){	int i,j;	for(i=1;i<=3;i++)	{		for(j=2;j<=4;j++)		{			if(i==j)			{				goto start;			}			else("%d%d\n",i,j);		}	}	start:		printf("%d%d\n",i,j);	printf("press any key to exit\n");	getch();	}