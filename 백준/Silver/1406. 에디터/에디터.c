#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 600001

char dat[MAX];
int pre[MAX] = {0};
int nxt[MAX] = {0};
int unused = 1;

void insert(int addr, char data)
{
	dat[unused] = data;
	pre[unused] = addr;
	nxt[unused] = nxt[addr];
	if(nxt[addr] != 0)
		pre[nxt[addr]] = unused;
	nxt[addr] = unused;
	unused++;
}

void delete(int addr)
{
	nxt[pre[addr]] = nxt[addr];
	if(nxt[addr] != -1)
		pre[nxt[addr]] = pre[addr];
}

void print()
{
	for(int i = nxt[0]; i != 0; i = nxt[i])
	{
		printf("%c", dat[i]);
	}
}

int main(void)
{
	int n;
	int cursor = 0;
	char a[100001];
	scanf("%s", a);
	int l = strlen(a);
	cursor = l;
	for(int i=0; i<l; i++)
	{
		insert(i, a[i]);
	}
	

	char op, new;
	scanf("%d", &n);
	
	
	for(int i=0; i<n; i++)
	{
		scanf(" %c", &op);
		if(op=='L')
		{

			if(cursor != 0)
				cursor = pre[cursor];
			
		}
		else if(op=='D')
		{
			if(nxt[cursor] != 0)
				cursor = nxt[cursor];
		}
		else if(op=='B')
		{
			if(cursor != 0)
			{
				delete(cursor);
				cursor = pre[cursor];
			}
		}
		else if(op=='P')
		{
			scanf(" %c", &new);
			insert(cursor, new);
			cursor = nxt[cursor];
		}
	}
	print();
	
}

