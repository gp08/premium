#include<stdio.h>
void main()
{
    int n,i,b,j;
    printf("Enter the Number");
    scanf("%d",&n);
    printf("Prime Numbers are: \n");
    for(i=1; i<=n; i++)
    {
        b=0;
        for(j=1; j<=n; j++)
        {
            if(i%j==0)
                b++;
        }
        if(b==2)
            printf("%d " ,i);
}}
