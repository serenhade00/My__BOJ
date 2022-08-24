#include <stdio.h>
#include <stdbool.h>
int check(char *arr)
{
    int i,j;
    int a[123]={0};
    for(i=0;arr[i]!='\0';i++)
    {
        if(arr[i]!=arr[i+1])
        {
            j=arr[i];
            a[j]++;

            if(a[j]>1)
                return false;
        }
    }
    return true;
}
int main()
{
    int N,cnt=0;
    scanf("%d",&N);
    while(N--)
    {
        char arr[101];
        scanf("%s",arr);
        if(check(arr))
            cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}
