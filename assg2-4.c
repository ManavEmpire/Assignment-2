#include <stdio.h>

void main()
{
float x,z;
int y;

printf("Price of item : ");
scanf("%f",&x);

y=(int)x;
z=x-y;

printf("Ruppees=%d",y);
printf("Paise=%d",(int)z);

}
