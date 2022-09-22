#include <stdio.h>

int main()
{
    int num;
    int a, b;
    scanf("%d\n", &num);
    
    for(int i=1; i<=num; i++)
    {
        
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d + %d = %d\n", i, a, b, a+b);
    }
}