#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    c=a*b;
    if(c%1==0)
    {
    printf("yes");
    }
    else
    {
        printf("no");
    }
    scanf("%d",&c);
    return 0;
}
