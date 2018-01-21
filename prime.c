#include<stdio.h>
int main()
{


int s=0,g,n;
scanf("%d",&n);
for(g=2;g<n;g++)
{
	if(n%g==0)
	
	{
		s=1;
		break;
	}
	
}
 	if(s==0)
 	{
 		printf(" prime");
 		
	}
	else
	{
		printf("not a prime");
	}
}
