
#include<stdio.h>
#include<string.h>
int main()
{
	char d[10];
	int i,m,count=0;
	scanf("%s",d);
	m=strlen(d);
	for(i=0;i<m;i++)
	{
	if(d[i]=='1'||d[i]=='2'||d[i]=='3'||d[i]=='4'||d[i]=='5'||d[i]=='6'||d[i]=='7'||d[i]=='8'||d[i]=='9'||d[i]=='0')
{
	count++;
}
}
	if(count==0)
	{
	printf(" not a numeric number");
	}
	else
	printf(" numeric number");
	}
