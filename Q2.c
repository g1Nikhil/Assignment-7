#include<stdio.h>

int main()
{
    int n,a = -1,b = 1,c,i;

    printf("enter n =");
    scanf("%d",&n);

    for (i = 1; i <= n; i++)
    {
        c = a+b;
        printf("%d",c);
        a = b;
        b = c;   
    }
    return 0;
}