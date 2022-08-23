#include <stdio.h>


int main()
{
     int x1, y1, w, h, minx, miny;
     int min = 0;
     
     scanf("%d %d %d %d", &x1, &y1, &w, &h);
     
     minx = w-x1;
     miny = h-y1;
     if(minx >= x1)
        minx = x1;
     if(miny >= y1)
        miny = y1;
     if(minx >= miny)
        min = miny;
     else
        min = minx;
     printf("%d", min);
}
