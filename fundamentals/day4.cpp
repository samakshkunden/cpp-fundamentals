#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    int original = n;
    int temp = n;
    int rev = 0;
    int count = 0;
    int sum = 0;
    if (temp < 0)
        temp = -temp;
    if (temp == 0)
        count = 1;

    while (temp > 0)
    {
        int digit = temp % 10;
        rev = rev * 10 + digit;
        sum += digit;
        count++;
        temp = temp / 10;
    }
    cout << "Reversed: " << rev << endl;
    cout << "Digit Count: " << count << endl;
    cout << "Sum of digits: " << sum << endl;

    if (rev == (original < 0 ? -original : original))
        cout << "Palindrome: Yes" << endl;
    else
        cout << "Palindrome: No" << endl;

    return 0;
}
