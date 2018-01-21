
#include <stdio.h>
int main()
{
  int a,b,e,d,n,c,g;
  scanf("%d %d",&a,&b);
  for(e=a+1;e<b;++e)
  {
      d=e;
      n=0;
      while(d!=0)
      {
          g=(d%10);
          c=g*g*g;
          n=n+c;
          d/=10;
      }
      if(e==n)
      {
          printf("%d ",e);
}
else
{printf("no nos");
break;
}}}
 
