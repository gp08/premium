# include <stdio.h>
# include<string.h>
int main(void) {
	char a[45];
	int l,i;
	scanf("%s",a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
	
	if((a[i]%2)==1)
	
		printf("\t%c",a[i]);
	}
	return 0;
}
