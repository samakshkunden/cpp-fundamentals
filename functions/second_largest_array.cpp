#include <iostream>
using namespace std;
int large(int arr[5])
{
    int i = 0;
    int a;
    int b;
    int c;
    for (i = 0; i < 5; i++)
    {
        if (arr[i] > a)
        {
            b = a;
            a = arr[i];
        }
        else if (arr[i] > b && arr[i] != a)
        {
            b = arr[i];
        }
    }
    return b;
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