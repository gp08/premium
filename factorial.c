#include<stdio.h>
int main()
{
int g,i,fact=1;
printf("enter number\n");
scanf("%d",&g);
for(i=1;i<=g;i++)
{
fact=fact*i;
}
printf("factorial=%d",fact);
}

