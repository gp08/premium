#include<stdio.h>
# include<string.h>
void main()
{
char a[50];
int len,g,space=0;
printf("enter the string:");
scanf("%\ns",&a);
len=strlen(a);
for(g=0;g<len;g++)
{
if(a[g]==' ')
space=space+1;
}
printf("there are %d space in the string",space);

}
