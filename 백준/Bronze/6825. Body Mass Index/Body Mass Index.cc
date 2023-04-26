#include <iostream>

using namespace std;

int main(void)
{
    double a, b;
    cin >> a >> b;
    
    if(a / (b*b) > 25)
        cout << "Overweight";
    else if(a / (b*b) >= 18.5 && a / (b*b) <= 25)
        cout << "Normal weight";
    else
        cout << "Underweight";
}