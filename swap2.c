#include<stdio.h>
void main()
{
    int x,y;
    printf(" \n Enters two numbers=");
    scanf("%d%d",&x,&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("%d%d",x,y);
}
