#include <stdio.h>
int main()
{
    int i, num,even= 0;
 
    printf("Enter the value of num\n");
    scanf("%d", &num);
    {
        if (num % 2 == 0)
            printf("even number");
        else
            printf("%d",num-1);
    }

}
