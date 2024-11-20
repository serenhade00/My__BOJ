#include <iostream> 

using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	
	string res = "EI";
	if (a == 1 || a == 3) {
		if (b == 6 || b == 8) {  
			if (c == 2 || c == 5) {  
				res = "JAH";  
			}
		}
	}
	cout << res;
}