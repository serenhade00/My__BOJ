#include <stdio.h>

int main()
{
    int value, n;
    int i, j, key = 0;
    
    scanf("%d", &value);
    
    for(n=0;;n++)
    {
        if(value<=(n*(n+1))/2)
            break;
    }
    
    key = ((n*(n-1)))/2+1;
    
    if(n%2==1)
    {
        for(i=n,j=1;;i--,j++)
        {
            if(key == value)
            {
                printf("%d/%d", i, j);
                break;
            }
            key++;
        }
    }
    else if(n%2==0)
    {
       for(i=1,j=n; ;i++,j--)
       {
           if(key == value)
           {
               printf("%d/%d", i, j);
               break;
           }
           key++;
       }
    }

}