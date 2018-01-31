#include<stdio.h>
int main()
{
int a,b,g;
printf("enter the values of a and b before swapping\n");
scanf("%d %d",&a,&b);
g=a;
a=b;
b=g;
printf("after swapping: %d,%d",a,b);
return 0;
}
