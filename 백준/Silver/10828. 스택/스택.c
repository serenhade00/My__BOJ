#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10001
#define COM_MAX 10

typedef struct {
	int data[MAX];
	int top;
}StackType;

typedef struct {
	char command[COM_MAX];
	int data;
}COM;

void create(StackType *s);
void push(StackType *s, int data);
int pop(StackType *s);
void size(StackType *s);
int is_empty(StackType *s);
void empty(StackType *s);
int is_full(StackType *s);
int top(StackType *s);

int main(void)
{
	int num;
	StackType s;
	create(&s);
	
	scanf("%d", &num);
	COM c;
	
	for(int i=0; i<num; i++)
	{
		scanf("%s", c.command);
		if(!strcmp(c.command, "push"))
		{
			scanf("%d", &c.data);
			push(&s, c.data);
		}
		else if(!strcmp(c.command, "pop"))
		{
			printf("%d\n", pop(&s));
		}
		else if(!strcmp(c.command, "size"))
		{
			size(&s);
		}
		else if(!strcmp(c.command, "empty"))
		{
			empty(&s);
		}
		else
			printf("%d\n", top(&s));
	}
	
}

void create(StackType *s)
{
	s->top = -1;
}

void size(StackType *s)
{
	printf("%d\n", (s->top)+1);
}
int is_empty(StackType *s)
{
	return ((s->top == -1));
}

void empty(StackType *s)
{
	if((s->top == -1))
		printf("%d\n", 1);
	else
		printf("%d\n", 0);
}
int is_full(StackType *s)
{
	return ((s->top == MAX-1));
}

void push(StackType *s, int data)
{
	if(is_full(s))
		exit(1);
	else
		s->data[++(s->top)] = data;
}

int pop(StackType *s)
{
	if(is_empty(s))
		return -1;
	else
		return s->data[(s->top)--];
}

int top(StackType *s)
{
	if(is_empty(s))
		return -1;
	else
		return s->data[(s->top)];
}