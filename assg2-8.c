#include <stdio.h>
#include <math.h>
void main()
{
float p,r,t,CI;

printf("Enter principle,rate and time : ");
scanf("%f %f %f",&p,&r,&t);

CI=p*pow((1+r/100),t);

printf("Compound interest is %f",CI);
}
