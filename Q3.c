#include<stdio.h>

int main()
{
    int n,a = 0,b = 1,c,i;

    printf("enter n =");
    scanf("%d",&n);

    if(n==0)
    printf("fibonacci no. ");

    c = a+b;

    while(c<n)
    {
        a = b;
        b = c;
        c = a+b;
    }

    if(c == n)
    printf("fibonacii");

    else
    printf("not fabonaccci");
     
     return 0;
}