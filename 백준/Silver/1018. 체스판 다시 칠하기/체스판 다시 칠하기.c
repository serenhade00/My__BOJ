#include <stdio.h>
#include <string.h>
#define MAX 51

char chess[MAX][MAX];
int identify_chess(int r, int c);
	
int main(void)
{
	int a, b;
	int ans;
	int min = 32;
	
	
	scanf("%d %d\n", &a, &b);
	
	
	for(int i=0; i<a; i++)
	{
		scanf("%s", chess[i]);
	}
	
	
	for(int i=0; i<a-7; i++)
	{
		for(int j=0; j<b-7; j++)
		{
			ans = identify_chess(i, j);
			if(ans<min)
				min = ans;
		}
	}
			
	
	printf("%d", min);
}

int identify_chess(int r, int c)
{
	int count1 = 0;
	int count2 = 0;
	int min = 0;
	
	
	// 첫 글자 B
	for(int i=r; i<r+8; i++)
	{
		if(i%2==0)
		{
			for(int j=c; j<c+8; j++)
			{
				
				if(j%2==0)
				{
					if(chess[i][j]!='B')
						count1++;
				}
				else
				{
					if(chess[i][j]!='W')
						count1++;
				}
			}
		}
		else
		{
			for(int j=c; j<c+8; j++)
			{
				if(j%2==0)
				{
					if(chess[i][j]!='W')
						count1++;
				}
				else
				{
					if(chess[i][j]!='B')
						count1++;
				}
			}
		}
	}
	
	// 첫 글자 W
	for(int i=r; i<r+8; i++)
	{
		if(i%2==0)
		{
			for(int j=c; j<c+8; j++)
			{
				
				if(j%2==0)
				{
					if(chess[i][j]!='W')
						count2++;
				}
				else
				{
					if(chess[i][j]!='B')
						count2++;
				}
			}
		}
		else
		{
			for(int j=c; j<c+8; j++)
			{
				if(j%2==0)
				{
					if(chess[i][j]!='B')
						count2++;
				}
				else
				{
					if(chess[i][j]!='W')
						count2++;
				}
			}
		}
		
	}
	
	
	if(count1<=count2)
		min = count1;
	else
		min = count2;
	return min;
}