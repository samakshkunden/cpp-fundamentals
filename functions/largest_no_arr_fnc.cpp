#include <iostream>
using namespace std;
int large(int arr[5])
{
    int i = 0;
    int a = 0;
    for (i = 0; i < 5; i++)
    {
        if (arr[i] > a)
        {
            a = arr[i];
        }
    }
    return a;
}
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "enter array element ";
        cin >> arr[i];
    }
    cout << large(arr);
}