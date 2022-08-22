#include<stdio.h>
#include<math.h>
int main(void)
{
	int t, x1, y1, r1, x2, y2, r2, ans;
	double dis, sub;
	scanf("%d",&t);
	
	while(t--)
	{
		scanf("%d %d %d %d %d %d",&x1,&y1, &r1, &x2,&y2,&r2);
		dis = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
		sub = r1>r2 ? r1-r2 : r2-r1;
		
		if(dis==0 && r1==r2) ans = -1;
		else if(dis<r1+r2 && (dis>sub))ans =2;
		else if(dis==r1+r2||dis==sub) ans=1;
		else ans=0;
		
		printf("%d\n",ans);
	}
	
	return 0;
	
}