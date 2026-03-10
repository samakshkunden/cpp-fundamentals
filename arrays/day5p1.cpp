#include <iostream>
using namespace std;
int main()
{
    int n;
    int i;
    int j;
    cout << "enter no ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}