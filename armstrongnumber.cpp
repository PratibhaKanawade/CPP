#include <iostream>     //armstrong number means:
using namespace std;   //Sum of each digit raised to the power of the number of digits = original number

int main()
{
    int n, original, digit, sum = 0;

    cout<<"enter number:";
    cin >> n;

    original = n;

    while (n > 0)
    {
        digit = n % 10;
        sum = sum + digit * digit * digit;
        n = n / 10;
    }

    if (sum == original)
        cout << "Armstrong number";
    else
        cout << "Not an Armstrong number";

    return 0;
}