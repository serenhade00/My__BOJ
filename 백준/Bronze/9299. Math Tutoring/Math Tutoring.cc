#include <iostream>

int main(){
	int T;
	std::cin >> T;
	for(int i = 1; i <= T; ++i){
		int n;
		std::cin >> n;
		
		int *coefficient = new int[n+1];
		for(int j = 0; j <= n; ++j){
			std::cin >> coefficient[j];
		}
		
		std::cout << "Case " << i << ": " << n-1;
		for(int j = 0; j < n; ++j){  
			std::cout << ' ' << coefficient[j] * (n - j);
		}
		std::cout << '\n';
	}
}