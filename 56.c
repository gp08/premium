#include<stdio.h>
int main()
{
char a[100];
int i,n,count=0,flag=0;
printf("\n enter no. of strings");
scanf("%d",&n);
printf("\n enter the string");
for(i=0;i<=n;i++)
{
scanf("%s",&a[i]);
}
for(i=0;i<=n;i++)
{
if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z'))
{
count++;
}
if(a[i]>='0'&&a[i]<='9')
{
flag++;
}
}
if(count>0&&flag>0)
{
printf("\n Both alphabets and numbers");
}
else
{
printf("\n Not both alphabets and numbers");
}return 0;
}
