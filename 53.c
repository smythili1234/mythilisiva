#include<stdio.h>
void main()
{
 int n,temp,sum=0;
 printf("enter the digits");
 scanf("%d",&n);
while(n>0)
{
 temp=n%10;
 sum=sum+temp;
 n=n/10;
 }
 printf("%d",sum);
 getch();
}
