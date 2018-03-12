#include <stdio.h>
int main()
{
	int n;
	printf("enter the num");
	scanf("%d",&n);
		if(n%1==0)
	{
		n++;
	}
	printf("nearest greater multiple  of 10 %d",n);
	return 0;
}
