#include <stdio.h>
void main()
{ int i, n1, t1 = 0, t2 = 1, t;printf("enter num");
scanf("%d",n1);
   for (i =1; i<n1;++i)
    {
        printf("%d ", t1);
        t = t1 + t2;
        t1 = t2;
        t2 = t;
    }
}
