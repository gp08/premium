#include<stdio.h>
int main()
{
    int g,f,h;
    scanf("%d",&g,&f,&h);
    if(g>>f&&g>>h)
    {printf("g big");
    }
    else if(f>>g&&f>>h)
    {printf("f big");
    }
    else if(h>>f&&h>>g)
    {printf("h big");
    }
}
