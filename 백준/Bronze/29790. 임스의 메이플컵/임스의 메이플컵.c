#include <stdio.h>
 
int main()
{
    int n, u, l;
    scanf("%d %d %d", &n, &u, &l);
    if (n >= 1000 && (u >= 8000 || l >= 260))
        printf("Very Good");
    else if (n >= 1000)
        printf("Good");
    else
        printf("Bad");
}