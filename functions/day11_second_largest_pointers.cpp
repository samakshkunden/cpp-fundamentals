#include <iostream>
using namespace std;

int secondLargest(int *arr, int n)
{
    if (n < 2)
        return -1;

    int largest = *arr;
    int second = -1;

    for (int i = 1; i < n; i++)
    {
        if (*(arr + i) > largest)
        {
            second = largest;
            largest = *(arr + i);
        }
        else if (*(arr + i) > second && *(arr + i) != largest)
        {
            second = *(arr + i);
        }
    }

    return second;
}

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int result = secondLargest(arr, n);

    if (result == -1)
        cout << "No second largest element";
    else
        cout << "Second largest: " << result;

    return 0;
}