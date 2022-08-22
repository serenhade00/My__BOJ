#include <stdio.h>


int main()
{
    
    int num, count = 0;
    int d1,d2,d3;
    int tem;
    scanf("%d", &num);
    
    for(int i=1; i<=num; i++)
    {
        if(i<10)
            count++;
        else if(i>=10 && i<=99)
        {
            count++;
        }
        else if(i==1000)
            break;
        else
        {
            d3 = i/100;
            tem = i%100;
            d2 = tem/10;
            d1 = tem%10;
            if((d3-d2)==(d2-d1) || (d2-d3)==(d1-d2))
                count++;
        }
        
    }
    printf("%d", count);  
}