#include <iostream>
using namespace std;

int main()
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "enter array element ";
        cin >> arr[i];
    }

    int *p = arr;
    int pos = 0;

    for (int i = 0; i < 5; i++)
    {
        if (*(p + i) != 0)
        {
            int temp = arr[pos];
            arr[pos] = *(p + i);
            *(p + i) = temp;

            pos++;
        }
    }

    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
}