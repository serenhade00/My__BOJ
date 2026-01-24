#include <iostream>
using namespace std;

int main()
{
	int count = 1;
	while (1)
	{
		int num1, num2;
		string oper;
		cin >> num1 >> oper >> num2;
		
		if (oper == "E")
			break;
		
		cout << "Case " << count << ": ";

		if (oper == ">")
			cout << (num1 > num2 ? "true" : "false");
		else if (oper == ">=")
			cout << (num1 >= num2 ? "true" : "false");
		else if (oper == "<")
			cout << (num1 < num2 ? "true" : "false");
		else if (oper == "<=")
			cout << (num1 <= num2 ? "true" : "false");
		else if (oper == "==")
			cout << (num1 == num2 ? "true" : "false");
		else if (oper == "!=")
			cout << (num1 != num2 ? "true" : "false");

		cout << '\n';
		count++;
	}
}