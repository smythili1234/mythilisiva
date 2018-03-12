#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,n;
    printf("enter the 1st integer");
    scanf("%d",&a);
    printf("enter the 2nd integer");
    scanf("%d",&b);
    n=a+b;
    if(n%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}
   
