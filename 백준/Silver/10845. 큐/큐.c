#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 2000001
#define COM_MAX 10

typedef struct {
	int data[MAX];
	int front, back;
}Queue;

typedef struct {
	char command[COM_MAX];
	int data;
}COM;

void create(Queue *q);
void push(Queue *q, int data);
int pop(Queue *q);
void size(Queue *q);
int is_empty(Queue *q);
void empty(Queue *q);
int is_full(Queue *q);
int front(Queue *q);
int back(Queue *q);

int main(void)
{
	int num;
	Queue q;
	create(&q);
	
	scanf("%d", &num);
	COM c;
	
	for(int i=0; i<num; i++)
	{
		scanf("%s", c.command);
		if(!strcmp(c.command, "push"))
		{
			scanf("%d", &c.data);
			push(&q, c.data);
		}
		else if(!strcmp(c.command, "pop"))
		{
			printf("%d\n", pop(&q));
		}
		else if(!strcmp(c.command, "size"))
		{
			size(&q);
		}
		else if(!strcmp(c.command, "empty"))
		{
			empty(&q);
		}
		else if(!strcmp(c.command, "front"))
			printf("%d\n", front(&q));
		else
			printf("%d\n", back(&q));
	}
	
	
	
	
	
}

int is_empty(Queue *q)
{
	return (q->front == q->back);
}
int is_full(Queue *q)
{
	return (q->front == (q->back + 1) % MAX);
}
void create(Queue *q)
{
	q->front = q->back = 0;
}

void push(Queue *q, int data)
{
	if(is_full(q))
		return;
	else
	{
		q->back = (q->back + 1) % MAX;
		q->data[q->back] = data;
	}
}

int pop(Queue *q)
{
	if(is_empty(q))
		return -1;
	else
	{
		q-> front = (q-> front + 1) % MAX;
		return q->data[q->front];
	}
}

void size(Queue *q)
{
	printf("%d\n", (q->back % MAX) - (q->front % MAX));
}

void empty(Queue *q)
{
	if(is_empty(q))
		printf("%d\n", 1);
	else
		printf("%d\n", 0);
}

int front(Queue *q)
{
	if(is_empty(q))
        return -1;
    else
        return q->data[(q->front + 1) % MAX];
}

int back(Queue *q)
{
    if(is_empty(q))
        return -1;
    else
	    return q->data[q->back % MAX];
}
