#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factors of %d are: ", n);
    for(i=2; i <n; ++i)
    {
        if (n%i == 0)
        {
            printf("yes");
        }
    }

    return 0;
}
