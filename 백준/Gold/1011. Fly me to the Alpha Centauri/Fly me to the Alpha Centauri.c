#include <stdio.h>
#include <math.h>

int main()

{
int testcase;
scanf(" %d", &testcase);
int value;

while(testcase != 0)

{

int x,y;

int i;

scanf(" %d %d", &x, &y);

i = (int) sqrt((double) (y-x));

value = (y-x)-(i*i); 

if(value > i)
   printf("%d\n",(i-1)*2+3 );
else if(value == 0)
   printf("%d\n",(i-1)*2+1 );
else
   printf("%d\n",(i-1)*2+2 ); 
testcase--;
}


}