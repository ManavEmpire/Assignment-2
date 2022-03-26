#include <stdio.h>

void main()
{
int a,b,c;

printf("ENTER NO A and B : ");
scanf("%d %d",&a,&b);

c=a;

a=b;
printf("\nValue after swapping is %d",a);
b=c;
printf("\nValue after swapping is %d",b);

}
