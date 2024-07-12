#include <cstdio>
using namespace std;

int main(){
	int Z,N;
	char S[500004];
	scanf("%d",&Z);
	while(Z--){
		int X=0,Y=0;
		scanf("%d %s",&N,S);
		for(int i=0;i<N;i++){
			if(S[i]=='N') Y++;
			else if(S[i]=='S') Y--;
			else if(S[i]=='W') X--;
			else if(S[i]=='E') X++;
		}
		printf("%d\n",(X<0?-X:X)+(Y<0?-Y:Y));
	}
}