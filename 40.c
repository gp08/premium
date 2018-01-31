#include <stdio.h>
int main()
{
	int f=0,s=1,i,limit,n;
	printf("enter the limit");
	scanf("%d",&limit);
	printf("%d%d",f,s);
	for(i=2;i<=limit;i++)
	{
		n=f+s;
		f=s;
		s=n;
		printf("%d",n);
	}return 0;
	}
