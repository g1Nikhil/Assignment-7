#include<stdio.h>
#include<math.h>

int main()
{
    int n,sum=0,originaln=n;
    printf("enter n = ");
    scanf("%d",&n);

    while (n>0)
    {
        int lastdigit = n%10;
        sum+=  pow(lastdigit,3);
        n=n/10;
    }
    
    if(sum==originaln)
    printf("the no. is Amstrong");

    else
    printf("not an amstrong");

    return 0;
}