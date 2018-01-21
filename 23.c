
#include<stdio.h>
int main()
{
int i,g,a[g],low;
printf("enter  value of g:");
scanf("%d",&g);
printf("\n enter array values:");
for(i=0;i<g;i++)
{

scanf("%d",&a[i]);
}
low=a[0];
for(i=0;i<g;i++)
{
if(low<a[i])
break;																																																																																																																																																																																																																																																																																																																																																																																													
else
low=a[i];
}printf("%d",low);
}
