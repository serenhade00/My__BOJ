#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 5001

int data[MAX];
int front = 0, back = 0;


void push(int val);
int pop(void);
int size(void);
int is_empty(void);
void empty(void);
int is_full(void);
int getfront(void);
int getback(void);

int main(void)
{
	int n, k;
	
	scanf("%d %d", &n, &k);
	
	back = n;
	for(int i=1; i<=n; i++)
	{
		data[i] = i;
	}
	
	printf("%c", '<');
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<k-1; j++)
		{
			push(pop());
		}
		if(i==n-1)
			printf("%d", pop());
		else
			printf("%d, ", pop());
	}
	printf("%c", '>');
}

int is_empty(void)
{
	return (front == back);
}
int is_full(void)
{
	return (front == (back + 1) % MAX);
}

void push(int val)
{
	if(is_full())
		exit(1);
	else
	{
		back = (back + 1) % MAX;
		data[back] = val;
	}
}

int pop(void)
{
	if(is_empty())
		return -1;
	else
	{
		front = (front + 1) % MAX;
		return data[front];
	}
}

int size(void)
{
	return ((back % MAX) - (front % MAX));
}

void empty(void)
{
	if(is_empty())
		printf("%d\n", 1);
	else
		printf("%d\n", 0);
}

int getfront(void)
{
	if(is_empty())
		return -1;
	else
		return data[(front + 1) % MAX];
}

int getback(void)
{
	if(is_empty())
		return -1;
	else
		return data[back % MAX];
}
