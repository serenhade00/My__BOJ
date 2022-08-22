#include <stdio.h>
#define MAX 51

#define SWAP(x, y, t) ( (t)=(x), (x)=(y), (y)=(t) )
void selection_sort(int list[], int size);
int div[MAX];

int main(void)
{
    int n;
    int num;
    scanf("%d", &n);
    
    for(int i=0; i<n; i++)
    {
        scanf("%d", &div[i]);
    }
    
    selection_sort(div, n);
	
  	printf("%d", div[0]*div[n-1]);
    
}

void selection_sort(int list[], int size)
{
	int min, tmp;
	
	for(int i=0; i<size-1; i++)
	{
		min = i;
		for(int j=i+1; j<size; j++)
		{
			if(list[j]<list[min])
				min = j;
		}
		SWAP(list[i], list[min], tmp);
	}
	
}