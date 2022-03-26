#include <stdio.h>

void main()
{
int a,b;

printf("Enter no A and B : ");
scanf("%d %d",&a,&b);

a=a+b;
b=a-b;
a=a-b;

printf("\n Value after swapping is %d and %d",a,b);
}
