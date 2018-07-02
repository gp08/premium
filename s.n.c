# include<stdio.h>
#include<conio.h>
void main()
{
    int a,i,s=0;
    printf("enter the number");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        s+=i;
    }printf("sum is%d",s);
}
