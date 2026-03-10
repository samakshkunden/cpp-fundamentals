#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int n = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << "enter array element ";
        cin >> arr[i];
    }
    cout << "enter no to be checked ";
    cin >> n;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == n)
        {
            cout << "number found at " << i << " index";
        }
        else
        {
            cout << "number not found";
        }
    }
}