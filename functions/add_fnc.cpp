#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int n1, n2;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    cout << "Sum is " << add(n1, n2);
}