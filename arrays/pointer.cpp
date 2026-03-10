#include <iostream>
using namespace std;
int main()
{
    int arr[3];
    int *p = arr;

    for (int i = 0; i < 3; i++)
    {
        cout << "enter array no ";
        cin >> arr[i];
    }
    for (int i = 0; i < 3; i++)
    {
        *(p + i) = *(p + i) + 5;
    }

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
}