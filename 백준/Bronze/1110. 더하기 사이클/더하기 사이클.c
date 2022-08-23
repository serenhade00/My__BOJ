#include <stdio.h>

int main()
{
   int N;
   int fir, sec= 0;
   int count = 0;
   int temp;
   int result = 100;
    
   
   scanf("%d", &N);
   
   temp = N;
   if(N<10)
   {
       temp = N*10;
       N = N*10;
   }
   while(result!=N)
   {
       fir = temp/10;
       sec = temp%10;
       result=((sec*10)+(fir+sec)%10);
       temp=result;
       count++;
   }
   printf("%d", count);
    
   
}