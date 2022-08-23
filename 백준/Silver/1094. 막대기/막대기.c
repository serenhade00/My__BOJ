#include <stdio.h>

int main(void)
{
	int a;
	int num = 64;
	int count = 0;
	scanf("%d", &a);
	
	while(a != 0)
	{
		if(a>=num)
		{
			count++;
			a %= num;
			num /= 2;
		}
		else
			num /= 2;
	}
	
	printf("%d", count);
}