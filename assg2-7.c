#include <stdio.h>
#include <math.h>
void main()
{
int principle,r,t,SI;

printf("Enter principle balance : ");
scanf("%d",&principle);
printf("Enter annual interest rate : ");
scanf("%d",&r);
printf("Enter time(in years) : ");
scanf("%d",&t);

SI=principle*r*t*0.01;

printf("Simple interest is %f",(float)SI);

}


