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
    int max = arr[0];
    int m2 = arr[1];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            m2 = max;
        }
        else if (arr[i] > m2 && arr[i] != max)
        {
            m2 = arr[i];
        }
    }
    cout << max << "\n";
    cout << m2 << "\n";
    return 0;
}