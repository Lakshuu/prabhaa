#include<stdio.h>
void main()
{
int a;
printf("Enter the number:");
scanf("%d",&a);
if(a>0)
{
printf("Number is positive");
}
elseif(a<0)
{
printf("Number is negative");
}
else
{
printf("Number is zero");
}
}
