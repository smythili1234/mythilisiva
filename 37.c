#include <stdio.h>

int main()
{
	int i,j,temp;
	scanf("%d%d",&i,&j);
temp=i;	
i=j;
j=temp;
printf("%d\t%d",i,j);

	getch();
}
