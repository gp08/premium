#include<stdio.h>
int main()
{
int n,m,product;
printf("enter two values\n");
scanf("%d %d",&n,&m);
product=n*m;
if(product%2==0)
{
printf("ans even\n");
}
else
{
printf("ans odd");
}return 0;
}
