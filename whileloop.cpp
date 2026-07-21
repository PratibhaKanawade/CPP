#include <iostream>
using namespace std;

int main()
{
    // Simple While Loop

    int i = 1;

    while (i <= 5)
    {
        cout << i << " ";
        i++;
    }

    cout << endl;


    // While Loop Using break

    int j = 1;

    while (j <= 10)
    {
        cout << j << " ";

        if (j == 5)
        {
            break;
        }

        j++;
    }

    cout << endl;


    // While Loop Using continue

    int k = 1;

    while (k <= 10)
    {
        if (k == 5)
        {
            k++;
            continue;
        }

        cout << k << " ";
        k++;
    }

    cout << endl;

    return 0;
}