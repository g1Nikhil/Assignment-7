#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,s;

    for ( j = 0; j < 1000; j++)
    {
        int r = 0;
        for(i=j;i!=0;)
        {
        s= i%10;
        r+= s*s*s;
        i=i/10;
       }
    if (r==j)
        printf("%d\n",j);
    }
    
    

    return 0;
}