#include <stdio.h>

int main()
{
    int a, b, c, d, n;
    int count;
    
    scanf("%d %d %d", &a, &b, &n);
    c = n-a;
    d = a-b;
    count = c/d;
    if(n==a)
        printf("1");
    else
    {
        if(a+(d*count) >= n) 
           printf("%d", count+1);
        else
           printf("%d", count+2);
    }
    
}