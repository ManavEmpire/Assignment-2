#include <stdio.h>

void main()
{
int x,y,z,a;

printf("Type values of X , y and Z : ");
scanf("%d %d %d",&x,&y,&z);

a=z;
z=x;
x=y;
y=a;

printf("\nValues after rotating values is x=%d,y=%d,z=%d",x,y,z);

}
