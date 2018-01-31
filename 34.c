#include <stdio.h>
#include<string.h>
int main() 
{
	char a[100]="hello hai.haiii";
	 int g,count=0;
	for(g=0;a[g]!='\0';g++)
	{
		if(a[g]=='.')
			count++;
	}
	printf("NO. OF lines %d",count+1);
	return 0;
}
