#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter array no ";
        cin >> arr[i];
    }
    int left = 0;
    int right = 4;
    while (left < right)
    {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}