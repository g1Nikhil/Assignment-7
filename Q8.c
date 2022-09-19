#include<stdio.h>

int main()
{
    int i,digit;
    scanf("%d",&digit);
    for ( i = digit; i < digit+1; i++)
    {
        if(digit%i==0)
        printf("%d",digit);
    }
    
        
        return 0;
    
}