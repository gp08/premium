#include<stdio.h>
void main()
{
	int n,b,a,s=0;
	scanf("%d",&n);
	b=n;
	while(b>0)
	{
		a=b%10;
		s=s*10+a;
		b=b/10;
	}
	if(s==n)
		printf("Palindrome");
	else
		printf("Not Palindrome");
}
