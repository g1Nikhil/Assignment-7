#include<stdio.h>

int main()
{
    int i,n,count,end,start;
    printf("starting digit");
    scanf("%d",&start);

    printf("ending digit");
    scanf("%d",&end);

    for ( n = start; n <= end; n++)
    {
        count =0;
        for ( i = 2; i < n/2; i++)
        {
            if(n%i==0)
            {
                count++;
                break;
            }
        }
        
        if (count ==0 && n!=1)
        {
            printf("%d\n",n);
        }
    }
        
        return 0;
    
}