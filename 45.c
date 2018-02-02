#include<stdio.h>
int main()
{
int a,count =0,f;
printf("\n  enter number \n");
scanf("%d",&a);
while(a>0)
{
a=a/10;
f=a;
count++;}
printf("\n number of digits%d",count);
return 0;
}
