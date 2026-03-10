#include <iostream>
using namespace std;
int main()
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "enter array no ";
        cin >> arr[i];
    }
    bool sorted = true;
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            sorted = false;
            break;
        }
    }
    if (sorted)
    {
        cout << " sorted array " << "\n";
    }
    else
    {
        cout << "not sorted array" << "\n";
    }
}