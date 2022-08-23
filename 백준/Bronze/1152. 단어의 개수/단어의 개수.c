#include <stdio.h>
#include <string.h>
#define SIZE 1000000

int main()
{
	int num = 0;
	char a[SIZE];
	
	gets(a);
	char std[] = " ";
	char *token;
	
	token = strtok(a, std);
	
	while(token != NULL)
	{
		num++;
		token = strtok(NULL, std);
	}
	
	printf("%d", num);
}