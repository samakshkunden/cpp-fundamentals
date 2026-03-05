#include <iostream>
using namespace std;

int main()
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        }

    for (int i = 0; i < 5 / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[4 - i];
        arr[4 - i] = temp;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}