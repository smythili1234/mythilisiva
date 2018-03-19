#include <stdio.h>
int main()
{
 int a,rev=0,rem=0;

 scanf("%d",&a);
   while(a!=0)
   {
       rem=a%10;
       rev=(rev*10)+rem;
       a=a/10;
   }
   a=rev;
    rev=0;
    rem=0;
    while(a!=0)
    {
        rem=a%10;
        if(rem%2==1)
        {
           printf("%d ",rem); 
        }
       a=a/10;
    }
	return 0;
}
