#include <stdio.h>
#include<string.h>
void main()
{
	char a[67];
	int b,k;
	int middle;
	printf("enter the element");
	scanf("%s",a);
	b=strlen(a);
	if(b%2==1)
	{
		k=b/2;
		middle=k+1;
		a[middle-1]='*';
		printf("%s",a);
	}
	else
	{
		k=b/2;
		middle=k;
		a[middle-1]='*';
	a[middle]='*';
printf("\n%s",a);
	}
}
