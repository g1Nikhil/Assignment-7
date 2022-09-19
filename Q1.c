#include<stdio.h>

int main()
{
    int n,a = 0,b = 1,c = 0,i;

    printf("enter n =");
    scanf("%d",&n);

    if(n == 0 || n==1)
    printf("%d",n);

    else
    c = a + b;
    for (i = 3; i <= n; i++)
    {
        a = b;
        b = c;
        c = a + b;
    }
    printf("%d",b);
    return 0;
}