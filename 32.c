#include<stdio.h>
int  main()
{
char g[100];
int i=0,count;
printf("enter the sentence");
scanf("%\ns",&g);
for(i=0;g[i]!='\0';i++)
{
if(g[i]==' ')
{
count++;
}
}
printf(" number of words %d",count);
}
