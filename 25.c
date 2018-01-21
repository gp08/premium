#include<stdio.h>
int main()
{
int a[8],i,j,swap,s,median;
printf("enter the size of an array");
scanf("%d",&s);
for(i=0;i<s;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<s;i++)
{
for(j=i+1;j<s;j++)
{
swap=a[i];
a[i]=a[j];
a[j]=swap;
}
}
printf("the sorted array is");
for(i=0;i<s;i++)
{
printf("%d",a[i]);
}
median=(s+1)/2;
printf("the median element is %d",a[median]);
}
