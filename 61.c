#include <stdio.h>
#include<string.h>
int main(void)
{
	char a[100],n[100];
	int i,k;
	printf("\nEnter character");
	scanf("%s",&a);
	printf("\nto be displayed");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		n[i]=a[i];
	}
	printf("\ncharacter is %s ",n);
	return 0;
}
