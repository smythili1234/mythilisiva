#include<stdio.h>
void main()
{
int a[20],i,j,n,temp;
printf("Enter the size of an array:\n");
scanf("%d",&n);
printf("Enter the element in an array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("%d",a[n/2]);
getch();
}
