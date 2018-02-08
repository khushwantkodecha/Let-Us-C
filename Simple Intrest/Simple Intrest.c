/* calculate simple interset */
#include<stdio.h>
#include<conio.h>
void main()
{   
    //clrscr();
    int p,n;
    float r,si;
    printf("enter the value of principle:=");
    scanf("%d",&p);
    printf("enter the value of year:=");
    scanf("%d",&n);
    printf("enter the value of rate:=");
    scanf("%f",&r);
    si=p*n*r/100;  /* formula of simple interest */
	printf("simple intrest:=%f",si);
    getch();
}