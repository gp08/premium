#include <stdio.h>
#include<string.h>
void main()
{
	char a[25],b[34];
	int c,i;
	printf("enter the string\n");
	scanf("%s",a);
	c=strlen(a);
	for(i=c-1;i>=0;i--)
	{
		b[c-i-1]=a[i];
	}
	if(strcmp(a,b)==0)
	{
		printf("palindrome");
	}
	else
	{
		printf("not palindrome");
	}
}
