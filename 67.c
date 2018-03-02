#include<stdio.h>
int main()
{
int a;
printf("enter the number");
scanf("%d",&a);
if(a%10!=0)
{
a++;
}
printf("nearest 10 th multiple is %d",a);
}
