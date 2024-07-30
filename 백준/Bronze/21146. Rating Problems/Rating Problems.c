#include  <stdio.h>
int main()
{
    int n,k,r,i;
    float min=0,max=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<k;i++)
    {
        scanf("%d",&r);
        max+=r;
    }
    min=max;
    min += -3*(n-k);
    max += 3*(n-k);
    printf("%f %f",min/n,max/n);
}