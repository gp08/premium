#include<stdio.h>
void main()
{
	int i,g,temp,a[50],max;
	printf("enter array element\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		for(g=i+1;g<10;g++)
	{
		if(a[i]<a[g])
		{
			temp=a[i];
			a[i]=a[g];
			a[g]=temp;
		}
	}
	}
	for(i=0;i<10;i++)
	{
	max=a[0];
	}
		printf("max among 10 elements %d",max);
	
}
	
