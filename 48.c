#include<stdio.h>
void main()
{
	int n,a[100],i,g=0;
	float avg;
	printf("\n enter N numbers:");
	scanf("%d",&n);
	printf("\n enter  numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		g=g+a[i];
	}
	avg=g/n;
printf("\n average of numbers:%f",avg);
}
