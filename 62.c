#include<stdio.h>
int main()
{
int a[10],i;
printf("enter the binary values");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
if((a[i]==0)||(a[i]==1))
{
printf("YES");
}
else
{
printf("NO");
}
}
return 0;
}
