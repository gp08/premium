#include<stdio.h>
void main()
{
  int a,b;
  printf("Enter the two elements\n");
  scanf("%d\t%d",&a,&b);
  a^=b;
  b^=a;
  a^=b;
  printf("After swap %d %d",a,b);
  
}
