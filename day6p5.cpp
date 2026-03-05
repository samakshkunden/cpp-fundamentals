#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int n = 0;
    int count = 0;
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
            count++;
        }
        }
    cout << n << " appears " << count << " times";
}