#include <iostream>
using namespace std;
int largest(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    cout << "Enter two numbers ";
    int n1;
    int n2;
    cin >> n1;
    cin >> n2;
    int result = largest(n1, n2);
    cout << "Largest number is " << result;
}