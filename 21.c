#include<stdio.h>
int main()
{
int g,d,n,t,totalnum;
int sum=0;
printf("enter the starting number:");
scanf("%d",&g);
printf("\nenter the difference of each number:");
scanf("%d",&d);
printf("\nenter the total number of terms:");
scanf("%d",&n);
sum=n*(2*(g+(n-1)*d))/2;
totalnum=g+(n-1)*d;
printf("\n the A.P is:");
for(t=g;t<=totalnum;t=t+d)
{
if(t!=totalnum)
{
printf("%d +",t);
}
else
{
printf("the result is %d=%d",t,sum);
}
}
}
