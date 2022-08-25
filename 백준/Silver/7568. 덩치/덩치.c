#include <stdio.h>
#define MAX 51

typedef struct person{
	int w;
	int h;
}PERSON;

int size_rank(PERSON a[], int n, int size);

int main(void)
{
	PERSON list[MAX];
	
	int n;
	int rank;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
		scanf("%d %d", &list[i].w, &list[i].h);
	
	for(int i=0; i<n; i++)
	{
		rank = size_rank(list, i, n);
		printf("%d ", rank);
	}
		
}

int size_rank(PERSON a[], int n, int size)
{
	int rank = 1;
	int w, h;
	
	w = a[n].w;
	h = a[n].h;
	for(int j=0; j<size; j++)
	{
		if(w<a[j].w && h<a[j].h)
			rank++;
	}
	
	
	return rank;
	
}