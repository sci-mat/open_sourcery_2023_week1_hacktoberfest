#include <iostream>
using namespace std;

bool isPalindrome(int x)
{
    if (x < 0)
        return false;

    int original = x;
    int reversed = 0;

    while (x != 0)
    {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;
    }

    return original == reversed;
}

int main()
{
    int x;
    cout << "Enter an integer: ";
    cin >> x;

    if (isPalindrome(x))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}