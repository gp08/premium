# include<stdio.h>
int main()
{
int a,b,c,d,e,g;
printf("give two time in hrs:min format");
scanf("%d%d%d%d",&a,&b,&c,&d);
if((a>c)&&(b<d))
{
    a--;
e=(a+1)-c;
g=(d-b);
}
else if((c>a)&&(b<d))
{
    e=(a)-c;
g=b-d;
e=-e;
g=-g;
}
else if((c>a)&&(b>d))
{
e=(a+1)-c;
g=60-(b-d);
g=-g;
}
else 
{
e=a-c;
g=b-d;
}
printf("  %d %d",e,g);
}
