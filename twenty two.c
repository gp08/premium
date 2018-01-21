#include<stdio.h> 
void main() 
{
   int y[40],j,n,max; 
   printf("Enter that want to fill the array");
   scanf("%d", &n);  
   for (j=0;j<n;j++)
   {
   scanf("%d", &y[j]);
   }
   max=y[0]; 
   for(j=0;j<n;j++)
   {
      if(y[j]>max)
      {
         max= y[j];
      }
   } 
   printf(" maximum  Element",max); 
  
}
