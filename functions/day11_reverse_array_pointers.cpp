#include <iostream>
using namespace std;

void reverse(int *arr, int n)
{
    int *start = arr;
    int *end = arr + n - 1;

    while (start < end)
    {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    int arr[5];
    int n = 5;

        for (int i = 0; i < n; i++)
    {
        cout << "enter no ";
        cin >> arr[i];
    }
    reverse(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}