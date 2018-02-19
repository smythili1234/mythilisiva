#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,t,a[10],n;
	clrscr();
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d"&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		if(a[i]>a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	}
	printf("%d",a[n-1]);
	return 0;
}
