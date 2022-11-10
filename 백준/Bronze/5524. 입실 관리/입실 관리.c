#include <ctype.h>
#include <string.h>
#include <stdio.h>

char text[21];

int main(void)
{
    int n;
    scanf("%d", &n);
    
    for(int i=0; i<n; i++)
    {
        scanf("%s", text);
        
        int len = strlen(text);
        for(int j=0; j<len; j++)
            printf("%c", tolower(text[j]));
        printf("\n");
    }
}