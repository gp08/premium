#include <stdio.h>
#include<string.h>
int main()
{
    char a[17];
    int g,i,count=0,total;
	printf("\nEnter the sentence : ");
	scanf("%[^\n]%*c",a);
	
	g=strlen(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{
			count++;
		}
	}
	total=g-count;
	printf("\nThere are %d letters in the sentence.",total);
	return 0;
}
