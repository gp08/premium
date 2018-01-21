#include <stdio.h>
int main() 
{
	int g,d,p;
	scanf("%d%d",&g,&d);
	for(p=g;p<=d;p++)
	{
		if(p%2==0)
		printf("%d\t",p);
	}
}
