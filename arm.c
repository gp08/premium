#include <stdio.h>
int main()
{
   int t,s=0,r,j;
  printf("enter\n");
scanf("%d",&j);
t=j;
while(j!=0)

{

    r=j%10;
    s=s+(r*r*r);
    j=j/10;
}
    if(s==t)
   {
        printf("armstrong");
    }
      else
   {
printf("not an armstrong");
}
}
