#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cout << "Enter first number ";
    cin >> a;
    cout << "Enter second number ";
    cin >> b;
    int sum = a + b;
    cout << "Sum is " << sum << "\n";
    int diff = a - b;
    cout << "Difference is " << diff << "\n";
    int prdt = a * b;
    cout << "Product is " << prdt << "\n";
    return 0;
}