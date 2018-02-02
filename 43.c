#include <stdio.h>
int main() {
	char a[10];	char b[10];
	printf("enter string 1\n");
    scanf("%s",&a);
	printf("enter string 2\n");
	scanf("%s",&b);
	printf("concatenated strings:%s %s",a,b);
	return 0;
}
