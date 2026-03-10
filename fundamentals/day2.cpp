#include <iostream>
using namespace std;
int main()
{
    int a;
    int sum = 0;
    while (a != 0)
    {
        cout << "Enter number" << "\n";
        cin >> a;
        sum = sum + a;
    }
    cout << sum;
    return 0;
}